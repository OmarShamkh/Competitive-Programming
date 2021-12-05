#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
ll k,x;
ll sum(ll s){
    return s*(s+1) /2;
}
bool solve(ll n){
    ll ans = 0;
    if(n <= k) ans = sum(n);
    else ans += sum(k) + sum(k-1)-sum(2*k-1-n);

    return ans >= x;
}
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        cin >> k >> x;
        ll st = 1, en = 2*k-1;
        while(st < en){
            ll mid = (st+en)/2;
            if(solve(mid)) en = mid;
            else st = mid+1;
        }
        cout << st << "\n";
    }

    return 0;
}