#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    // freopen("gcd.in", "r", stdin);
    
    int t;
    cin >> t;
    ll ans , tmp;
    for(int i=0; i<t; i++){
        ll l,r;
        cin >> l >> r;
        if(!i){
            ans = __gcd(l,r);
            cout << __gcd(l,r) << "\n";
        }
        else{
            ans = __gcd(tmp , __gcd(l,r));
            cout << __gcd(tmp , __gcd(l,r)) << "\n";
        }
        tmp = ans;//18
    }
    
    return 0;
}