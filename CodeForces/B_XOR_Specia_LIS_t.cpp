#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
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
const int N = 1e5+5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
int a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n; // XOR == 0 in the case the numbers of ones is even
        for(int i=0; i<n; i++) cin >> a[i];
        bool b = false;
        for(int i=1; i<n; i++){
            if(a[i] <= a[i-1]) {
                b = true;
                break;
            }
        }
        cout << (n%2 == 0 || b ? "YES\n" : "NO\n");
    }
    
    return 0;
}