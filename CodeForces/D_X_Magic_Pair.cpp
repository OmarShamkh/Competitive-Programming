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
        ll a,b,x;
        cin >> a >> b >> x;
        bool ok = false;
        while(a && b){
            if(a < b) swap(a,b);
            if((a-x)%b == 0 && a>=x){
                ok = true;
                break;
            }
            a %= b; 
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}