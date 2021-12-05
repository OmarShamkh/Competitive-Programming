#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+5;
int a[N];

int main()
{
    INGZzz
    
    ll n,s;
    cin >> n >> s;
    map<ll,int>mp;
    ll sum = 0, ans = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        if(s == sum) ans++;
        ans += mp[sum - s];
        mp[sum]++;
    }
    cout << ans << "\n";
    return 0;
}