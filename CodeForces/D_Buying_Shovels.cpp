#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int ans = 2e9;
        for(int i=1; i*i<=n; i++){
            if(n%i == 0){
                int a = n/i , b = i;
                if(b <= k) ans = min(ans, a);
                if(a <= k) ans = min(ans,b);
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}