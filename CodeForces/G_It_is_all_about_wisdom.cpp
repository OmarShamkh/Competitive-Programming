#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
int n,m,k;
struct data{
    int to,cost,wisdom;
};
vector< vector<data> > adj;
bool vis[N];
bool chk;
bool dijkstra(int mid){
    for(int i=1; i<=n; i++) vis[i] = 0;
    priority_queue<pair<int,int> ,vector<pair<int,int>>, greater<pair<int,int> > > pq;
    pq.push({0,1});
    while(!pq.empty()){
        int wis = pq.top().first;
        int to = pq.top().second;
        pq.pop();
        if(wis >= k) continue;
        if(to == n){
            chk = true;
            return true;
        }
        vis[to] = 1;
        for(auto child : adj[to]){
            if(child.wisdom <= mid && !vis[child.to]){
                pq.push({(wis+child.cost), child.to});
            }
        }    
    }
    return false;
}

int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        adj.resize(n+5);
        while(m--){
            int u,v,c,w;
            cin >> u >> v >> c >> w;
            adj[u].push_back({v , c , w});
            adj[v].push_back({u , c , w});
        }
        int l = 0 , r = 1e9;
        chk = false;
        while(l < r){
            int mid = l + (r-l) /2;
            if(dijkstra(mid)) r = mid;
            else l = mid + 1;
        }
        cout << (chk ? l : -1) << "\n";
        adj.clear();
    }

    return 0;
}