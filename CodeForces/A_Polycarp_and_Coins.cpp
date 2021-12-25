#include <bits/stdc++.h>
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
        if(n%3 == 0) cout << n/3 << " " << n/3 << "\n";
        else{
            int c1 = n/3 , c2 = n/3 +1;
            if(c1 + 2*c2 == n) cout << c1 << " " << c2 << "\n";
            else cout << c2 << " " << c1 << "\n";
        }
    }
    return 0;
}            
