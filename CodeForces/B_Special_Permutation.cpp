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
        int n,a,b;
        cin >> n >> a >> b;
        if((a <= n/2 && b <= n/2 )|| (a >n/2 && b>n/2) || (n<n/2-1+a) ||(b<n/2)) cout <<"-1\n";
        else{
            cout << a << ' ';
            for(int i=n; i>0; i--){
                if(i != a && i != b) cout << i << ' ';
            }
            cout << b << '\n';
        }
    }

    return 0;
}