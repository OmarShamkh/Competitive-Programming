#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
int t , n;
vector< vector <pair<int,int> > >adj;
int dijkstra(int source, int target){
    vector<int>dist(n+5 , 1e9);
    dist[source] = 0;
    priority_queue< pair<int,int> > pq;
    pq.push({0,source});
    while(!pq.empty()){
        int cost = -pq.top().first; 
        int node = pq.top().second;
        // cout << node << " " << cost << "\n";
        pq.pop();
        if(node == target) return cost;
        for(auto child : adj[node]){
            if(cost + child.first < dist[child.second] ){
                dist[child.second] = cost + child.first;
                pq.push({-dist[child.second] , child.second});
            }
        }
    }
    return -1;
}
int main()
{
    INGZzz
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    cin >> t;
    while(t--){
        cin >> n;
        map<string,int> mp;
        adj = vector< vector <pair<int,int> > >(n+5);
        for(int i=1; i<=n; i++){
            string city;
            cin >> city;
            mp[city] = i;
            int m;
            cin >> m;
            while(m--){
                int x,w;
                cin >> x >> w;
                adj[i].push_back({w,x});
            }
        }
        int q;
        cin >> q;
        while(q--){
            string cit1, cit2;
            cin >> cit1 >> cit2;
            int src = mp[cit1] , targ = mp[cit2];
            // cout << src << " " << targ << "\n";
            cout << dijkstra(src, targ) << "\n";
        }

    }
    return 0;
}