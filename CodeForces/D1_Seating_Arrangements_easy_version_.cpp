#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
const int N = 305;
int a[N];
int main()
{
    
    cin.tie(0);cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int ans = 0;
        for(int i=0; i<m; i++) cin >> a[i];
        for(int i=0; i<m; i++){
            for(int j=i-1; j>=0; j--){
                ans += a[i] > a[j];
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}