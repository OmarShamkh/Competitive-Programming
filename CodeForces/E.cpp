#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+10;
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
        int ans = 0;
        for(int i=0; i<n; i++){
            int st = i , en = n-1, idx = i;
            while(st <= en){
                int mid = (st+en) /2;
                if(a[mid] - a[i] < 32){
                    idx = mid;
                    st = mid+1;
                }
                else en = mid-1;
            }
            ans += (idx - i);
        }
        cout << ans << "\n";
    }
    
    return 0;
}