#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 16;
ll a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll n,l,r,x,ans = 0;
    cin >> n >> l >> r >> x;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int msk=0; msk <(1<<n); msk++){
        ll cnt =0 , ma = 0 , mi = 1e9 , sum = 0;
        for(int i=0; i<n; i++){
            if(((1<<i) & msk) !=0){
                cnt++;
                sum +=a[i];
                ma = max(ma , a[i]);
                mi = min(mi, a[i]);
            }
        }
        if(cnt >= 2 && sum >= l && sum <= r && (ma-mi) >=x ) ans++;
    }
    cout << ans;
    return 0;
}