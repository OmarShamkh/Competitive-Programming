#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+10;
int n, a[N], b[N], c[N] , dp[3][N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    INGZzz
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i];
    dp[0][0] = a[0];
    dp[1][0] = b[0];
    dp[2][0] = c[0];

    for(int i=1; i<n; i++){
        dp[0][i] = a[i] + max(dp[1][i-1], dp[2][i-1]);
        dp[1][i] = b[i] + max(dp[0][i-1], dp[2][i-1]);
        dp[2][i] = c[i] + max(dp[1][i-1], dp[0][i-1]);
    }
    cout << max({dp[0][n-1], dp[1][n-1] , dp[2][n-1]}) << "\n";
    return 0;
}