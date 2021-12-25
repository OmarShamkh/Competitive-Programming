#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
int a[N],n,c,t;

bool solve(ll k){
    ll sum = 0 , person = 1;
    k = k*t;
    for(int i=0; i<n; i++){
        if(a[i] > k) return false;
        if(a[i] + sum <= k) sum += a[i];
        else if(sum+a[i] > k){
            person++;
            sum = a[i];
        }
    }
    return (person <= c);
}
int main()
{
    INGZzz
    
    cin >> n >> c >> t;
    for(int i=0; i<n; i++) cin >> a[i];
    int l =0, r=2e9 , ans=2e9;
    while(l<=r){
        int mid = (l+r)/2;
        if(solve(mid)){
            r = mid-1;
            ans = mid;
        }
        else l = mid+1;
    }
    cout << ans << "\n";
    return 0;
}