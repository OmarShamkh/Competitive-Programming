#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 3e5+10;
ll a[N] , b[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll t;
    cin >>t;
    while(t--){
        ll n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i] >> b[i];
        ll ans = 0 , mi = 1e18 , idx;
        for(int i=0; i<n; i++){
            ll val = a[i] - max(0LL, a[i]-b[(i-1+n)%n]);
            if(val < mi){
                mi = val;
                idx = i;
            }
        }
        ans += a[idx];
        a[(idx+1)%n] -= b[idx];
        a[(idx+1)%n] = max(0LL , a[(idx+1)%n]);
        for(int i= idx+1; i<idx+n; i++){
            ans += a[i%n];
            a[(i+1)%n] -= b[i%n];
            a[(i+1)%n] = max(0LL , a[(i+1)%n]);
        }
        cout << ans << "\n";
    }
    return 0;
}