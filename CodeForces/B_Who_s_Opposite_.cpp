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
        int a,b,c,d;
        cin >> a >> b >> c;
        int ans = abs(a-b);
        if(ans*2 < max(a,max(b,c))){
            cout << "-1\n";
            continue;
        }
        if(c <= ans) cout << c+ans << "\n";
        else cout << c-ans << "\n";
    }
    
    return 0;
}