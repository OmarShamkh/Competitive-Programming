#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 210;
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
    int n,m;
    while(cin >> n && n){
        cin >> m;
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
        bool bicolor = false;
        for(auto i : edges){
            if(color[i.first] == color[i.second]){
                bicolor = true;
                break;
            }
        }
        if(bicolor) cout <<"NOT BICOLORABLE.\n";
        else cout << "BICOLORABLE.\n";
    }
    return 0;
}