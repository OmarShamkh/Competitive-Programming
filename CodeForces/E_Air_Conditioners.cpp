#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 3e5+10;
int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<ll> a(k+1) , t(n+1, 2e9);
        for(int i=1; i<=k; i++) cin >> a[i];
        for(int i=1; i<=k; i++){
            ll temp;
            cin >> temp;
            t[a[i]] = temp;
        }
        ll ans = 2e9;
        for(int i=1; i<=n; i++){
            ans = min(t[i] , ans+1);
            t[i] = ans;
        }
        for(int i=n; i>=1; i--){
            ans = min(t[i] , ans+1);
            t[i] = ans;
        }
        for(int i=1; i<=n; i++) cout << t[i] << " "; cout <<"\n";
    }
    
    return 0;
}