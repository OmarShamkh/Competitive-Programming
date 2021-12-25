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
        cout << min({a,b,(a+b) /4});
        cout << "\n";
    }

    return 0;
}