#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 105;
ll n,h, a[N];
bool solve(ll k){
    ll sum = 0;
    for(int i=1; i<n; i++){
        sum += min(k, a[i]-a[i-1]);
    }
    return (sum+k >= h);
}
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        cin >> n >> h;
        for(int i=0; i<n; i++) cin >> a[i];
        ll st = 0 , en = h , ans = h;
        while(st <= en){
            ll mid = (st+en) / 2;
            if(solve(mid)){
                ans = mid;
                en = mid-1;
            }
            else st = mid+1;
        }
        cout << ans << "\n";
    }

    return 0;
}