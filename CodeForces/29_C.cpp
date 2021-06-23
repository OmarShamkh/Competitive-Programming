#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e7;
int n,x,y;
map<int,bool>vis;
map<int, vector<int> > mp;
void dfs(int node){
    vis[node] = true;
    cout << node << " ";
    for(auto e : mp[node]){
        if(!vis[e]) dfs(e);
    }
}
int main()
{
    INGZzz
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        mp[y].push_back(x);
        mp[x].push_back(y);
    }
    for(auto it : mp){
        if(it.second.size() == 1){
            //cout << it.first<<"\n";
            dfs(it.first);
            break;
        }
    }
    return 0;
}