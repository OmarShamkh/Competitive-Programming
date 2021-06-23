#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 2e5+10;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll n;
    cin >> n;
    ll a[n/2] , ans [n];
    for(int i=0; i<n/2; i++) cin >> a[i];
    ll l = 0 , r = a[0];
    for(int i=0; i<n/2; i++){
        if(a[i]>=r){
            l = max(l,a[i]-r);
            r = a[i] - l;
        }
        else{
            r = min(r,a[i]-l);
            l = a[i] - r;
        }
        ans[i] = l;
        ans[n-i-1] = r;
    }
    for(auto i : ans) cout << i << ' ';
    return 0;
}