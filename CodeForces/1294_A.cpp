#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> t;
    while(t--){
        int a,b,c,n;
        cin >> a >> b >> c >> n;
        int sum = a+b+c;
        int ma = max(a,max(b,c));
        if(3*ma-sum <=n && (n - (3*ma -sum))%3 == 0 ) cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}