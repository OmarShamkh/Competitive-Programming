#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef long double ld;

const int N = 1e5+5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
ll a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n, greater<int>());
        double sum = 0;
        for(int i=1; i<n; i++) sum += a[i];
        sum /= (n-1);
        cout <<fixed << setprecision(9) << sum + a[0] << "\n"; 
    }
    
    return 0;
}