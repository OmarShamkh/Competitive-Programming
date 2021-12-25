#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3+5;

int a[N];
int main()
{
    
    INGZzz
    int t;
    cin >> t;
    while(t--){
        int n,h;
        cin >> n >> h;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n, greater<int>());
        int sum = a[0] + a[1];
        int ans = h/sum;
        ans *= 2;
        if(h % sum > 0) ans++;
        if(h % sum > a[0]) ans++;
        cout << ans << "\n";
    }
    
    return 0;
}