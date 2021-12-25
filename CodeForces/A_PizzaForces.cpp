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
        ll n, ans; // 3 4 5 
        cin >> n;
        if(n&1) n++;
        ans = max(3*1LL , n/2);
        cout << ans*5 << "\n";

    }
    
    return 0;
}