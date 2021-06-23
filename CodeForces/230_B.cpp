#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5+10;
int t; 
bool isprime(int x){
    if(x < 2) return false;
    for(int i=2; i*i <=x; i++) if(x % i== 0) return false;
    return true;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = sqrt(n);
        if(isprime(ans) && n == ans*ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}