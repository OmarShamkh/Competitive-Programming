#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
int a[55];
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        int ans = a[1] - a[0];
        for(int i=1; i<n; i++){
            ans = min(ans, a[i]-a[i-1]);
        }
        cout << ans << "\n";
    }
    
    return 0;
}