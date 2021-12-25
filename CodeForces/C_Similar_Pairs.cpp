#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
int a[55];
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int odd = 0 , even = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] & 1) odd++;
            else even++;
        }
        if(even%2 != odd%2) cout << "NO\n";
        else{
            if(even%2 == 0 && odd%2 == 0) cout << "YES\n";
            else{
                bool f = false;
                for(int i=0; i<n; i++){
                    for(int j=i+1; j<n; j++){
                        if(abs(a[i]-a[j]) == 1){
                            f = true;
                            break;
                        }
                    }
                }
                if(f) cout << "YES\n";
                else cout << "NO\n";
            }
        
        }
    }
    
    return 0;
}