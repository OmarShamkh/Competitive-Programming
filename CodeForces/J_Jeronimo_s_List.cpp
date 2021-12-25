#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 3e7+5 , M = 3e7;
int a[N], b[N], fr[N];
int main()
{
    INGZzz
    
    int n,m,q;
    cin >> n >> m >> q;
    for(int i=1;i<=m; i++) cin >> a[i] , fr[a[i]]++;
    for(int i=m+1; i<=n; i++) a[i] = (a[i-m] %M + a[i-m+1] %M) %M , fr[a[i]]++;

    // sort(a,a+n+1);
    int now = 0;
    for(int i=0; i<N; i++){
        while(fr[i]){
            b[++now] = i;
            fr[i]--;
        }
    }
    for(int i=1; i<=q; i++){
        int t; cin >> t;
        cout << b[t] << "\n";
    }
    
    return 0;
}