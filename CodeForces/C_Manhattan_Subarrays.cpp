#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
void solve(){
    int n;
    cin >> n;
    int cnt = 1 , sum = 1;
    while(sum < n){
        n -= sum;
        cnt++;
        sum += 2;
    }
    cout << cnt << "\n";
}

int main()
{
    INGZzz
            
    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}