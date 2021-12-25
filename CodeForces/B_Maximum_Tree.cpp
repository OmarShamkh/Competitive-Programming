#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 35;
int a[N];

int main()
{
    INGZzz
    
    int n;
    cin >> n;
    ll ans = 1 , sum =1;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n,greater<int>());
    for(int i=0; i<n; i++){
        sum *= a[i];
        ans += sum;
    }
    cout << ans << "\n";
    
    return 0;
}