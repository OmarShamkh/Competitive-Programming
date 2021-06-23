#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> prims;
bool isprime(ll x){
    if(x < 2) return false;
    for(int i=2; i*i <=x; i++) if(x%i==0) return false;
    return true;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll t;
    cin >> t;
    for(int i=0; i<30000; i++) if(isprime(i)) prims.push_back(i);
    //for(auto x : prims) cout << x << " ";

    while(t--){
        ll d;
        cin >> d;
        ll a = *lower_bound(prims.begin(),prims.end(),1+d);
        ll b = *lower_bound(prims.begin(),prims.end(),a+d);
        cout << a*b << "\n";
    }
    return 0;
}