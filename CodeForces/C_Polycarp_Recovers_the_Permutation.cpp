#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        int pos = -1;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] == n) pos = i;
        }
        if(pos != 0 && pos != n-1) cout << "-1\n";
        else{
            for(int i=n-1; i>=0; i--) cout << a[i] << ' ';
            cout << "\n";
        }
    }

    return 0;
}