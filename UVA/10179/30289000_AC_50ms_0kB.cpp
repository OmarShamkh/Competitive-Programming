#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
ll phifunc(ll n){
    ll phi = n;
    for(ll i=2; i*i<=n; i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            phi -= phi / i;
        }
    }
    if(n > 1) phi -= phi / n;
    return phi;
}
void seive_phi(int n){
    int phi[n+1];
    for(int i=1; i<=n; i++) phi[i] = i;
    for(int i=2; i<=n; i++){
        if(phi[i] == i){
            for(int j=i; j<=n; j+=i){
                phi[j] -= phi[j]/i;
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout << phi[i] << "\n";
    }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll n;
    while(cin>>n && n){
        cout << phifunc(n) << endl;
    }
    
    return 0;
}