#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e3+10;
int n;
vector<int> adj[N];
int bfs(int source){
    queue<pair<int,int>>q;
    q.push({source, 1});
    int ma = 1;
    while(!q.empty()){
        int node = q.front().first;
        int level = q.front().second;
        ma = max(ma , level);
        q.pop();
        for(auto child : adj[node]){
            q.push({child , level + 1});
        }
    }
    return ma;
}
int main()
{
    INGZzz
    vector<int> roots;
    cin >> n;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        if(x != -1) adj[x].push_back(i);
        else roots.push_back(i);
    }
    int ans = 0;
    for(auto i : roots){
        ans = max(ans , bfs(i));
    }
    cout << ans << "\n";
    return 0;
}