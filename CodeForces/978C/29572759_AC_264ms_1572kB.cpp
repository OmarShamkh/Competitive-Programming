#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 2e5+10;
ll n,m , a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(i) a[i] += a[i-1];
    }
    for(int i=0; i<m; i++){
        ll x;
        cin >> x;
        ll st = 0 , en = n-1 , mid;
        while (st < en)
        {
            mid  = st + (en - st) / 2;
            if(a[mid] >= x) en = mid;
            else st = mid+1;
        }
        cout << st+1 << " "<< x - a[st-1] << "\n";
    }
    return 0;
}