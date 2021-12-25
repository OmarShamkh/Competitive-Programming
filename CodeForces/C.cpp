#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3;
int a[N];
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int k,m,n;
        cin >> k >> m >> n;
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a,a+n,greater<int>());
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(sum+m <= k) break;
            sum -= a[i];
            cnt++;
        }
        cout << cnt << "\n";
    }
    
    return 0;
}