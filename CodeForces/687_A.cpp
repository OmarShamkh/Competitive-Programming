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
int main()
{
    INGZzz
    int n,m;
    cin >> n >> m;
    adj = vector<vector<int> > (n+5);
    color = vector<int>(n+5, -1);
    vector<pair<int,int>>edges;
    vector<int> part1 , part2;
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
    for(auto i : edges){
        if(color[i.first] == color[i.second]){
            cout << -1;
            return 0;
        }
    }
    for(int i=1; i<=n; i++){
        if(color[i] == 1){
            part1.push_back(i);
        }
        else{
            part2.push_back(i);
        }
    }
    cout<<part1.size()<<"\n";
    for(auto i : part1) cout << i << " ";
    cout<<"\n";
    cout<<part2.size()<<"\n";
    for(auto i : part2) cout << i << " ";
    cout<<"\n";
    return 0;
}