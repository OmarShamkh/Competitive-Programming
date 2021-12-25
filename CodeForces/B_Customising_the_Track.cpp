#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
int t;
int main()
{
    INGZzz
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll sum = 0;
        for(int i=0; i<n; i++){
            ll x;
            cin >> x;
            sum += x;
        }
        // cout << sum << endl;
        ll ext = sum % n;
        cout << ext * (n - ext) << "\n";
    }
    return 0;
}