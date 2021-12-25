#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
int a[N] , b[N];

int main()
{
    
    INGZzz
    int t;
    cin >> t;
    while(t--){
        int x,n;
        cin >> n >> x;
        for(int i=0; i<n; i++) cin >> a[i] , b[i] = a[i];
        sort(a,a+n);
        bool f = false;
        for(int i=0; i<n; i++){
            if(a[i] != b[i] && i>n-1-x && i<x){
                f = true;
                break;
            }
        }
        if(f) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}