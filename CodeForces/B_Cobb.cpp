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
        int n,k; 
        cin >> n >> k;
        for(int i=0; i<n; i++) cin >> a[i];
        ll ans = -1e18;
        for(int i=n-1; i>= max(0, n-100); i--){
            for(int j=i+1; j<n; j++){
                ans = max(ans, 1LL*(i+1)*(j+1) - 1LL *k*(a[i] | a[j]));
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}