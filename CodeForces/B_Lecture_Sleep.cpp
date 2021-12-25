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
    
    int n,k;
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    int t ,sum = 0;
    for(int i=1; i<=n; i++){
        cin >> t;
        if(t){
            sum += a[i];
            a[i] = 0;
        }
    }
    for(int i=1; i<=n; i++) a[i] += a[i-1];
    int ans = 0;
    for(int i=1; i+k-1<=n; i++) ans = max(ans, a[i+k-1]-a[i-1]);
    cout << ans + sum << "\n";
    return 0;
}