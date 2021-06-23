#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3;
int n , m, adj[N][N];

int main()
{
    INGZzz
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int x,y;
        cin >> x >> y;
        adj[x][y] = adj[y][x] = 1;
    }
    bool ch = false;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(!adj[i][j] && i!=j || adj[i][j] != adj[j][i]) ch = true;
        }
    }
    cout << (ch ? "NO\n" : "YES\n");
    return 0;
}