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
#define clr(x, val)	memset((x), (val), sizeof(x))
#define endl '\n'
#define quit(x)  return cout << (x) << endl,0;
const double pi  = 3.141592653589793238463;
typedef complex<double> point;
#define EPS 1e-8
#define EQ(x, y)	(abs((x)-(y)) <= EPS)
#define GT(x, y)	((x)-(y) > EPS)
#define LT(x, y)	((y)-(x) > EPS)
#define GTE(x, y)   (GT(x, y) || EQ(x, y))
#define LTE(x, y)   (LT(x, y) || EQ(x, y))
#define dot(u,v)                 	((conj(u)*(v)).real())
#define cross(u,v)                 	((conj(u)*(v)).imag())
#define colinear(a, b, c)           (EQ(cross(b-a, c-a),0))
const int N = 1e5, OO = 0x3f3f3f3f, mod = 1e9 + 7;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n,m,k; cin >> n >> m >> k;
        // n and m are even
        if(!(n&1) && !(m&1)){
            cout << (k&1 ? "NO\n" : "YES\n");
        }
        // n odd , m even 
        else if(n&1 && !(m&1)){
            if(k< m/2) cout << "NO\n";
            else{
                k -= m/2;
                if(!(k&1)) cout << "YES\n";
                else cout << "NO\n";

            }
        }
        // n even , m odd
        else if(!(n&1) && m&1){
            if(!(k&1) && k <= n*m /2 - n/2 ) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    
    return 0;
}