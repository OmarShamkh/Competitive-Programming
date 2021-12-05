#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 4e5+5;
int a[N] , b[N];
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        for(int i=0; i<k; i++){
            cin >> a[i];
            b[i] = n-a[i];
        }
        sort(b,b+k);
        ll sum = 0 , ans;
        bool f = false;
        for(int i=0; i<k; i++){
            sum += b[i];
            if(sum >= n){
                f = true;
                ans = i;
                break;
            }
        }
        if(f) cout << ans << "\n";
        else cout << k << "\n";
    }
    
    return 0;
}