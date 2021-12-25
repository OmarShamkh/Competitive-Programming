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

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    // freopen("input.txt", "r", stdin);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.length();
        if(s[0] != s[n-1]) cout << n-1 << "\n";
        else if(s[0] == s[n-1]) cout << n-2 << "\n";
    }
    
    return 0;
}