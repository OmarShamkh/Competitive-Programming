#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3;
int n , adj[N][N], color[N];
bool vis[N][N];
int cnt = 0;
void dfs(int node){
    for(int i=0; i<n; i++){
        if(adj[node][i] && !vis[node][i]){
            vis[node][i] = vis[i][node] = true;
            if(color[node] != color[i]) cnt++; 
            dfs(i);
        }
    }
}
int main()
{
    INGZzz
    cin >> n;
    memset(color, -1, sizeof color);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> adj[i][j];
        }
    }
    for(int i=0; i<n; i++) cin >> color[i];
    
    for(int i=0; i<n; i++) dfs(i);
    cout << cnt << "\n";
    return 0;
}