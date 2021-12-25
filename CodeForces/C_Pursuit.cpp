#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
int a[N], b[N];

int main()
{
    INGZzz
            
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        sort(a,a+n,greater<int>());
        sort(b,b+n,greater<int>());
        int k = n - n/4;
        int l =0 , r=0 , sumA =0 , sumB=0;
        while(l<k){
            sumA += a[l++];
            sumB += b[r++];
        }
        int ans = 0 , nn = n;
        while(sumA < sumB){
            ans++;
            n++;
            sumA += 100;
            if(n%4 != 0 && r < nn) sumB += b[r++];
            if(n%4==0) sumA -= a[--l];
        }
        cout << ans << "\n";
    }
    
    return 0;
}