#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 5e5+10;
int n,m;
bool visited[N];
vector<int> adjlist[N];
vector<int> group;
int ans[N];
void dfs(int node){
    visited[node] = true;
    group.push_back(node);
    for(auto adjnode : adjlist[node]){
        if(!visited[adjnode]){
            dfs(adjnode);
        }
    }
}
int main()
{
    INGZzz
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int k;
        cin >> k;
        if(k == 0) continue;
        int user;
        cin >> user;
        k--;
        while(k--){
            int newuser;
            cin >> newuser;
            adjlist[user].push_back(newuser);
            adjlist[newuser].push_back(user);
        }
    }
    for(int node =1; node<=n; node++){
        if(!visited[node]){
            dfs(node);
            for(auto i : group) ans[i] = group.size();
            group.clear();
        }
    }
    for(int i=1;i<=n; i++) cout << ans[i] << " ";
    return 0;
}