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
        int a,b;
        cin >> a >> b;
        if((a+b)%2) cout << "-1 -1\n";
        else{
            int ma = max(a,b), mi = min(a,b);
            int sum = a+b;
            sum /= 2;
            if(a == ma) cout << ma-sum << ' ' << mi << '\n';
            else cout << mi << ' ' << ma-sum <<'\n';
        }
    }

    return 0;
}