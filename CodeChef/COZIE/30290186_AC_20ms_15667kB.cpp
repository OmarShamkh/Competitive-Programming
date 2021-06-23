#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5+10;
int ans[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n, q, cnt=0;
    cin >> n >> q;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        if(x == 3 || x == 4 || x == 6) cnt++;
        ans[i] = cnt;
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << ans[r] - ans[l-1] << "\n";
    }
    return 0;
}