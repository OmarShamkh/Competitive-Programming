#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5 + 10;
int n,m , cost[N] , mn;
bool vis[N];
vector<vector<int>> adj;
void dfs(int x){
    vis[x] = true;
    mn = min(mn , cost[x]);
    for(auto i : adj[x]){
        if(!vis[i]) dfs(i);
    }
}
int main()
{
    INGZzz
    cin >> n >> m;
    adj = vector<vector<int>> (n+5);
    for(int i=1; i<=n; i++){
        cin >> cost[i];
    }
    while(m--){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll ans = 0;
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            mn = 2e9;
            dfs(i);
            ans += mn;
        }
    }
    cout << ans << "\n";
    return 0;
}