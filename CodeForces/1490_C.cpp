#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        bool f =true;
        for(ll i=1; i*i*i<=n; i++){
            ll rem = n - i*i*i;
            ll j = cbrt(rem);
            if(rem>=1 && rem<=n && j*j*j+i*i*i ==n){
                f = false;
                break;
            }
        }
        cout << (f ? "NO\n" : "YES\n");
    }
    
    return 0;
}