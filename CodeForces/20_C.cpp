#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+10;
int n,m , parent[N];
ll cost[N];
vector< pair<int,int> >adj[N];
void dijkstra(int source){

    for(int i=1; i<=n; i++) cost[i] = 1e18;
    cost[source] = 0;
    priority_queue<pair<ll,int>> pq;
    pq.push({0,source});
    while(!pq.empty()){
        ll coost = -pq.top().first;
        int node = pq.top().second;
        //cout << node << " " << coost << "\n";
        pq.pop();
        for(auto child : adj[node]){
            if(coost + child.first < cost[child.second]){
                cost[child.second] = coost + child.first;
                parent[child.second] = node;
                pq.push({-cost[child.second] , child.second});
            }
        }
    }
}
int main()
{
    INGZzz
    vector<int>path;
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int x,y,w;
        cin >> x >> y >> w;
        adj[x].push_back({w,y});
        adj[y].push_back({w,x});
    }
    dijkstra(1);
    int cur_node = n;
    while(cur_node !=0){
        path.push_back(cur_node);
        cur_node = parent[cur_node];
    }
    if(cost[n] == 1e18) cout << -1 << "\n";
    else{
        reverse(path.begin() , path.end());
        for(auto i : path) cout << i << " ";
    }
    
    return 0;
}