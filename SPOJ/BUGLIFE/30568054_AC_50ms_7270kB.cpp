#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e3+ 10;
int t, n,m;
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
int main()
{
    INGZzz
    cin >> t;
    int tc =1;
    while(t--){
        cin >> n >> m;
        adj = vector<vector<int> > (n+5);
        color = vector<int>(n+5, -1);
        vector<pair<int,int>>edges;
        for(int i=1; i<=m; i++){
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
        bool f = true;
        for(auto i : edges){
            if(color[i.first] == color[i.second]){
                f = false;
                break;
            }
        }
        if(!f){
            cout << "Scenario #"<<tc++<<":\n"<<"Suspicious bugs found!\n";
        }
        else{
            cout << "Scenario #"<<tc++<<":\n"<<"No suspicious bugs found!\n";
        }
    }
    return 0;
}