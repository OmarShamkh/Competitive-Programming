#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5+10;
ll n , k,a[N] , b[N];
bool  ok(int m){
    ll cnt = 0;
    for(int i=0; i<n; i++){
        if(a[i] * m *1LL > b[i]) cnt += (a[i]*m*1LL - b[i]);
        if(cnt > k) return false;
    }
    return true;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    ll st = 0 , en = 2e9 , mid;
    while(st < en){
        mid  = st + (en -st + 1) / 2;
        if(ok(mid)) st = mid;
        else en = mid -1;
    }
    cout << st << "\n";
    return 0;
}