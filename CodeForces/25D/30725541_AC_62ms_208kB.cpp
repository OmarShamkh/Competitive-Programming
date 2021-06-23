#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3;
struct DSU
{
    vector<int> parent , sz;
    set<int> roots;
    DSU(int n){
        parent = vector<int>(n+1);
        sz = vector<int>(n+1);
        for(int i=1; i<=n; i++){
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

int main()
{
    INGZzz
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    vector<pair<int,int>> edges(n+1);
    for(int i=1; i<n; i++){
        cin >> edges[i].first >> edges[i].second;
        // --edges[i].first , --edges[i].second;
    }
    DSU dsu(n);
    vector<pair<int,int>> useless;
    for(int i=1; i<n; i++){
        int x = edges[i].first , y = edges[i].second;
        if(!dsu.connect(x,y)){
            useless.push_back({x,y});
        }
    }
    vector<int> rootss(dsu.roots.begin() , dsu.roots.end());
    cout << useless.size() << "\n";
    for(int i=0; i<rootss.size()-1; i++){
        cout << useless[i].first << " " << useless[i].second << " ";
        cout << rootss[i] << " " << rootss[i+1] << "\n";
    }
    return 0;
}