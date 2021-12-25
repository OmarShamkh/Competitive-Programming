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
const int N = 2e5+5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
int a[N];
int main()  
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=0; i<n; i++) cin>> a[i];
        sort(a,a+n);
        int sum = 0 , ans = 0;  
        for(int i=0; i<n-2; i++){
            sum += a[i];
            if((i+1) <n-2) sum += a[i+1] , a[i+1] = 0;
            else if((i+2) <n-2) sum += a[i+2] , a[i+2] = 0;
            cout << i << " ";
            cout <<sum <<endl;
            ans = max(ans,sum);
            a[i] = 0;
        }
        cout << ans << "\n";
    }
    return 0;
}