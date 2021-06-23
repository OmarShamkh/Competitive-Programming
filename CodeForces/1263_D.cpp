#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e6 +5;
int n;
vector<int> adj[N];
bool vis[N];
void dfs(int node){
    vis[node] = true;
    for(auto ch : adj[node]) if(!vis[ch]) dfs(ch);
}
int main()
{
    INGZzz
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        for(auto ch : s){
            adj[i].push_back(n+ch);
            adj[n+ch].push_back(i);
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            ans++;
            dfs(i);
        }
    }
    cout << ans << "\n";
    return 0;
}