#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
ll GCD(ll a, ll b){
    return (b == 0 ? a : GCD(b , a%b));
}
ll LCM(ll a, ll b){
    return b/GCD(a,b) * a;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll x,ans;
    cin >> x;
    for(ll i=1; i*i <= x; i++){
        if(x%i == 0 && LCM(i,x/i) == x) ans = i;
    }
    cout << ans << " " << x/ans << "\n";
    return 0;
}