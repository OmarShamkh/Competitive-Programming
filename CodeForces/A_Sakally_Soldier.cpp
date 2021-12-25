#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define len(s)   (int)s.length()
#define sz(v)    (int)v.size()
#define all(a)   a.begin(),a.end()
const int N = 1e5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
ll n;
bool solve(ll k){
    return ((k*(k+1)/2) <= n);
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    freopen("alimagde.in", "r", stdin);
    
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ll l =1, r=n , ans;
        while(l<=r){
            ll mid = (l+r)/2;
            if(solve(mid)){
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        cout << n-ans << "\n";
    }
    return 0;
}