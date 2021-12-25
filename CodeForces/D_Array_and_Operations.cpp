#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
int a[N];
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int sum = 0;
        for(int i =0 ; i<n; i++) cin >> a[i] , sum += a[i];
        sort(a, a+n, greater<int>());
        int ans = 0;
        int i = 0 , j = k;
        while(k--){
            ans += a[j] / a[i];
            sum -= a[i];
            sum -= a[j];
            i++ , j++;
        }
        cout << ans + sum << endl;
    }

    return 0;
}