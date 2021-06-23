#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5 + 10;
vector<int> adj[N] , ans;
bool vis[N];
int n , a[N] , re_order[N];
bool compare(int a, int b){
    return (re_order[a] < re_order[b]);
}
void bfs(int node){
    vis[node] = true;
    queue<int>q;
    q.push(node);
    while(!q.empty()){
        int s = q.front();
        ans.push_back(s);
        q.pop();
        for(auto i : adj[s]){
            if(!vis[i]){
                q.push(i);
                vis[i] = true;
            }
        }
    }
}
int main()
{
    INGZzz
    cin >> n;
    for(int i=0; i<n-1; i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=0; i<n; i++) cin >> a[i] , re_order[a[i]] = i;
    for(int i=1; i<=n; i++){
        sort(adj[i].begin() , adj[i].end() , compare);
    }
    bfs(1);
    for(int i=0; i<n; i++){
        if(ans[i] != a[i]){
            return cout <<"No\n", 0;
        }
    }
    cout << "Yes\n";
    return 0;
}