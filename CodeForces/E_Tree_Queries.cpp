#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+5;
vector<int> adj[N];
int parent[N], intime[N] , outtime[N] , cnt;

void dfs(int node, int par){
    parent[node] = par;
    intime[node] = cnt++;
    for(auto ch : adj[node]) if(ch != par) dfs(ch,node);
    outtime[node] = cnt++;
}
int main()
{

    INGZzz
    int n,q;
    cin >> n >> q;
    for(int i=0; i<n-1; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    adj[0].push_back(1);
    dfs(0,0);

    while(q--){
        int k;
        cin >> k;
        vector<pair<int,int>>path;
        for(int i=0; i<k; i++){
            int node;
            cin >> node;
            node = parent[node];
            path.push_back({intime[node],outtime[node]});
        }
        sort(path.begin(), path.end());
        bool f = true;
        for(int i=1; i<k; i++){
            if(path[i].first < path[i-1].first || path[i].second > path[i-1].second){
                f = false;
                break;
            }
        }
        cout << (f ? "YES\n" : "NO\n");
    }
    return 0;
}