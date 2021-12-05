#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1010;
vector<pair<int,int>> adj[N], newadj[N];
int n,m,x,y,t[N],c[N];
ll cost[N];

void PreDijktra(int source){
    for(int i=1; i<=n; i++) cost[i] = 1e18;
    cost[source] = 0;
    priority_queue< pair<ll,int> >pq;
    pq.push({0,source});
    while(!pq.empty()){
        ll coost = -pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if(coost > t[source]) continue;
        newadj[source].push_back({node, c[source]});
        for(auto child : adj[node]){
            if(coost + child.second < cost[child.first]){
                cost[child.first] = coost + child.second;
                pq.push({-cost[child.first] , child.first});
            }
        }
    }
}

void Dijkstra(int source){
    for(int i=1; i<=n; i++) cost[i] = 1e18;
    cost[source] = 0;
    priority_queue< pair<ll,int> >pq;
    pq.push({0,source});
    while(!pq.empty()){
        ll coost = -pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto child : newadj[node]){
            if(coost + child.second < cost[child.first]){
                cost[child.first] = coost + child.second;
                pq.push({-cost[child.first] , child.first});
            }
        }
    }
}

int main()
{
    
    INGZzz
    
    cin >> n >> m >> x >> y;
    for(int i=0; i<m; i++){
        int u,v,c;
        cin >> u >> v >> c;
        adj[u].push_back({v,c});
        adj[v].push_back({u,c});
    }

    for(int i=1; i<=n; i++) cin >> t[i] >> c[i];

    for(int i=1; i<=n; i++) PreDijktra(i);

    Dijkstra(x);
    cout << (cost[y] == 1e18 ? -1 : cost[y]) << "\n";
    return 0;
}