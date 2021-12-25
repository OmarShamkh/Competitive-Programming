#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+10;
int n,a[N];
bool solve(int x){
    int b[n];
    for(int j=0; j<x; j++){
        for(int i=0; i<n; i++){
            b[i] = __gcd(a[i] , a[(i+1)%n]);
        }
    }
    int cnt =0;
    for(int i=0; i<n; i++) cnt+=(b[i] == 0);
    return (cnt==n );
}
int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        int l=0 , r=n  , ans = 0;
        while(l<=r){
            int mid = (r+l)/2;
            if(solve(mid)){
                ans = mid;
                r = mid;
            }
            else l = mid+1;
        }
        cout << ans << "\n";

    }
    return 0;
}