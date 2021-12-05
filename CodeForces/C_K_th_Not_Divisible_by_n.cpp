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
        int n,k;
        cin >> n >> k;
        cout << k + k/(n-1) - (k%(n-1) == 0) << "\n";
    }
    
    return 0;
}