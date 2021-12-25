#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
int t;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> t;
    while (t--){
        ll a,b;
        cin >> a >> b;
        if(a == b) cout << 0 << " " << 0 << "\n";
        else{
            if(a < b) swap(a,b);
            ll ans = abs(a-b);
            ll min1 = b % ans , min2 = ans - b%ans;
            cout << ans << " " << min(min1,min2) << "\n";
        }
    }
    return 0;
}