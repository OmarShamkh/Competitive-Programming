#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+10;
ll n,a[N],fr[N] , dp[N];
int main()
{
    INGZzz
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        fr[a[i]]++;
    }
    dp[0] = 0;
    dp[1] = fr[1];
    for(int idx = 2; idx<=100000; idx++){
        dp[idx] = max(dp[idx-1] , dp[idx-2] + fr[idx] * idx);
    }
    cout << dp[100000] << "\n";
    return 0;
}