#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
vector<ll>v;
void lucky(ll n){
    if(n > 1e10) return;
    if(n) v.push_back(n);
    lucky(n*10+4);
    lucky(n*10+7);
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int l ,r;
    cin >> l >> r;
    lucky(0);
    sort(v.begin(),v.end());
    //for(int i=0; i<10; i++) cout<<v[i]<<"\n";
    ll ans = 0;
    for(int i=0; i<v.size(); i++){
        while(v[i] >= l && l <= r){
            ans += v[i];
            l++;
        }
    }
    cout << ans ;
    return 0;
}