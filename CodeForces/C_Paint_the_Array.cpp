#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 105;
ll a[N];
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> oddpos , evenpos;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i%2 == 0) evenpos.push_back(a[i]); // 
            else oddpos.push_back(a[i]); // 
        }
        ll Gcd1 = 0 ,Gcd2 = 0 ;
        bool flag1 = 1 , flag2 = 1;
        for(int i=0; i<evenpos.size(); i++){
            Gcd1 = __gcd(Gcd1 , evenpos[i]);
        }
        for(int i=0; i<oddpos.size(); i++){
            Gcd2 = __gcd(Gcd2 ,oddpos[i]);
        }
        for(int i=0; i<evenpos.size(); i++){
            if(Gcd2 && evenpos[i]%Gcd2 == 0) flag2 = 0;
        }
        for(int i=0; i<oddpos.size(); i++){
            if(Gcd1 && oddpos[i]%Gcd1 == 0) flag1 = 0;
        }
        if(Gcd1 && flag1) cout << Gcd1;
        else if(Gcd2 && flag2) cout << Gcd2;
        else cout << 0;    
        cout << "\n";
    }

    return 0;
}