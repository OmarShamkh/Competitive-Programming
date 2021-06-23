#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e4+10;
ll t , n, a[N] ,dp[N];
int main()
{
    INGZzz
    cin >> t;
    for(int tc=1; tc<=t; tc++){
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        dp[0] = a[0];
        dp[1] = max(dp[0] , a[1]);
        for(int i= 2; i<n; i++){
            dp[i] = max(dp[i-1] , a[i]+dp[i-2]);
        }
        cout << "Case " << tc << ": " << dp[n-1] << "\n";
    }
    return 0;
}