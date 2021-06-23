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
        ll ans = 0 , mi = 1e18 ;
        for(int i=0; i<n; i++){
            ans += max(0LL, a[i] - b[(i-1+n)%n]);
        }
        for(int i=0; i<n; i++){
            ll all = ans - max(0LL,a[i]-b[(i-1+n)%n]) + a[i];
            mi = min(mi,all);
        }
        
        cout << mi << "\n";
    }
    return 0;
}