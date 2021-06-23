#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 310;
int n , dis[N][N];
int main()
{
    INGZzz
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> dis[i][j];
        }
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                dis[i][j] = min(dis[i][j] , dis[i][k] + dis[k][j]);
            }
        }
    }
    int k;
    cin >> k;
    while(k--){
        int x , y, c;
        cin >> x >> y >> c;
        dis[x][y] = min(dis[x][y] , c);
        dis[y][x] = dis[x][y];
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                dis[i][j] = min(dis[i][j], dis[i][x] + dis[y][j] + c);
                dis[i][j] = min(dis[i][j], dis[i][y] + dis[x][j] + c);
            }
        }
        ll ans = 0;
        for (int i=1; i<=n; i++) {
            for (int j=i; j<=n; j++) {
                ans += dis[i][j];
            }
        }
        cout << ans << " ";
    }
    return 0;
}