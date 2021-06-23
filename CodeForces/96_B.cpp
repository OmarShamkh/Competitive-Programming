#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
vector<ll>v,ans;
bool superlucky(int n){
    int cnt4 = 0 , cnt7 = 0;
    while(n){
        if(n%10 == 7) cnt7++;
        else cnt4++;
        n /= 10;
    }
    return (cnt4 == cnt7);
}
void lucky(ll n,int c4 , int c7){
    if(n > 1e11) return;
    if(c4 == c7 && n) v.push_back(n);
    lucky(n*10+4,c4+1,c7);
    lucky(n*10+7,c4,c7+1);
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    lucky(0,0,0);
    sort(v.begin(),v.end());
    //for(auto i : v) cout << i <<"\n";
    int idx = lower_bound(v.begin(),v.end(),n)-v.begin();
    cout << v[idx]<<"\n";
    return 0;
}