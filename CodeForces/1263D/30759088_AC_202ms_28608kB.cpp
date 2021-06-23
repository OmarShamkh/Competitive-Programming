#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e6 +5;
struct DSU
{
    vector<int> parent , sz;
    set<int> roots;
    DSU(int n){
        parent = vector<int>(n+1);
        sz = vector<int>(n+1);
        for(int i=0; i<n; i++){
            parent[i] = i , sz[i] = 1;
            roots.insert(i);
        }
    }
    int find(int x){
        if(x == parent[x]) return x;
        return parent[x] = find(parent[x]);
    }

    bool connect(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y) return false;
        if(sz[x] < sz[y]) swap(x,y);
        parent[y] = x;
        sz[x] += sz[y];
        roots.erase(y);
        return true;
    }
};

// vector<int> adj[N];
// bool vis[N];
// void dfs(int node){
//     vis[node] = true;
//     for(auto ch : adj[node]) if(!vis[ch]) dfs(ch);
// }
int main()
{
    INGZzz
    int n;
    cin >> n;
    int fr[n][26];
    memset(fr, 0, sizeof fr);
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        for(char ch : s){
            fr[i][ch-'a']++;
        }
    }
    DSU dsu(n);
    for(int i=0; i<26; i++){
        vector<int> comp;
        for(int j=0; j<n; j++){
            if(fr[j][i]){
                comp.push_back(j);
            }
        }
        for(int j=0; j<int(comp.size())-1; j++){
            dsu.connect(comp[j] , comp[j+1]);
        }
    }
    cout << dsu.roots.size() <<"\n";
    // int ans = 0;
    // for(int i=0; i<n; i++){
    //     if(!vis[i]){
    //         ans++;
    //         dfs(i);
    //     }
    // }
    // cout << ans << "\n";
    return 0;
}