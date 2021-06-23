#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
int q,c,m,x;
bool ok(int n){
    int nc = c , nm = m;
    nc -= n , nm -= n;
    int all = nc+nm+x;
    all -= n;
    if(all >= 0 && nc>=0 && nm>= 0) return true;
    else return false;
    
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> q;
    while(q--){
        cin >> c >> m >> x;
        int st = 0 , en = 1e8 , mid;
        while(st < en){
            mid = st + (en - st+1) /2;
            if(ok(mid)) st = mid;
            else en = mid-1;
        }
        cout << st << "\n";
    }
    return 0;
}