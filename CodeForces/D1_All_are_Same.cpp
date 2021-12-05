#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 50;

int a[N];
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
        int mi = a[0];
        int ans = 0;
        for(int i=0; i<n; i++){
            ans = __gcd(ans ,abs(a[i]- mi));
        }
        cout << (ans == 0 ? -1 : ans) << "\n";
    }
    
    return 0;
}