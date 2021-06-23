#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5 + 10;
ll n, a[N] , b[N] , dp[2][N];
int main()
{
    INGZzz
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    dp[0][0] = a[0];
    dp[1][0] = b[0];
    for(int idx = 1; idx<n; idx++){
        dp[0][idx] = max(dp[0][idx-1] , dp[1][idx-1] + a[idx]);
        dp[1][idx] = max(dp[1][idx-1] , dp[0][idx-1] + b[idx]);
    }
    cout  << max(dp[0][n-1] , dp[1][n-1]) << "\n";
    return 0;
}