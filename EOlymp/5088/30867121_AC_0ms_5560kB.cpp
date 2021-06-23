#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3+5;
int n ,m , adj[N][N];

int main()
{
    INGZzz
    cin >> n >> m;
    // int adj[n+5][n+5] = {};
    for(int i=1; i<=m; i++){
        int x,y; cin >> x >> y;
        adj[x][y] = adj[y][x] = 1;
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        int cnt = 0;
        for(int j=1; j<=n; j++){
            cnt += adj[i][j];
        }
        ans += (cnt==1);
    }
    cout << ans << "\n";
    return 0;
}