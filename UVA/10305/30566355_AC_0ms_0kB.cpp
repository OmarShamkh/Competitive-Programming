#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz           cin.tie(0);cin.sync_with_stdio(0);
const int N = 150;
int n , m;
bool vis[N];
vector<vector<int>> adjlist;
vector<int>ans;
void dfs(int node){
    vis[node] = true;
    for(auto e : adjlist[node]){
        if(!vis[e]){
            dfs(e);
        }
    }
    // cout << node << " ";
    ans.push_back(node+1);
}
int main()
{
    INGZzz
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    while(cin >> n >> m && n!=0 ){
        adjlist = vector<vector<int>> (n+1);
        ans = vector<int>(n+1);
        for(int i=0; i<m; i++){
            int x,y;
            cin >> x >> y;
            adjlist[x-1].push_back(y-1);
        }
        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        reverse(ans.begin(), ans.end());
        for(auto i : ans){
            if(i) cout << i << " ";
        }
        cout << "\n";
        ans.clear();
        adjlist.clear();
        memset(vis,false,sizeof vis);
    }
    return 0;
}