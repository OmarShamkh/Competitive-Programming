#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5 , Mod = 1e9 + 7;
int t,n,k;
ll fastpower(ll a, ll b, ll M){
    if(b == 0) return 1;
    ll res = fastpower(a,b/2,M);
    res = res%M * res%M;
    if(b&1) res *= a;
    return res % M;
}
int main()
{
    INGZzz
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << fastpower(n,k,Mod) << "\n";
    }

    return 0;
}