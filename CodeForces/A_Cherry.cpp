#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
int a[N];
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        ll ans = 0;
        for(int i=1; i<n; i++){
            ans = max(ans , 1LL * a[i] * a[i-1]);
        }
        cout << ans << "\n";
    }
    
    return 0;
}