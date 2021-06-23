#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
ll phifunc(ll n){
    ll phi = n;
    for(ll i=2; i*i<=n; i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            phi -= phi / i;
        }
    }
    if(n > 1) phi -= phi / n;
    return phi;
}
ll divisors(ll n){
    ll cnt = 1;
    for(ll i=2; i*i<=n; i++){
        if(n%i == 0){
            if(n/i == i) cnt++;
            else cnt+=2;
        }
    }
    return cnt;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll n;
    while(cin >> n){
        cout << max(0LL , n - phifunc(n) - divisors(n)) << "\n";
    }
    return 0;
}