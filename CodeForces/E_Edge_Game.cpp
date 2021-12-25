#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5 + 10;
vector<vector<int> > adj;
vector<int>color;
void dfs(int node){
    for(auto child : adj[node]){
        if(color[child] == -1){
            color[child] = !color[node];
            dfs(child);
        }
    }
}
ll cost[N];
vector< pair<int,int> >adj[N];
void dijkstra(int start , int end){
    for(int i=1; i<=n; i++) cost[i] = 1e9;
    cost[source] = 0;
    priority_queue<pair<int,int>> pq;
    pq.push({0,source});
    while(!pq.empty()){
        int coost = -pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto child : adj[node]){
            if(coost + child.first < cost[child.second]){
                cost[child.second] = coost + child.first;
                pq.push({-cost[child.second] , child.second});
            }
        }
    }
}
int main()
{
    INGZzz
    int n;
    cin >> n;
    adj = vector<vector<int> > (n+5);
    color = vector<int>(n+5, -1);
    vector<pair<int,int>>edges;
    for(int i=1; i<=n-1; i++){
        int x,y;
        cin >> x >> y;
        edges.push_back({x,y});
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        if(color[i] == -1){
            color[i] = 1;
            dfs(i);
        }
    }
    for(int i=1; i<=n; i++) cout << color[i] << " ";
    for(auto i : edges){
        if(color[i.first] == color[i.second]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}