#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,a,b,c, ans = 0;
    cin >> n >> a >> b >> c;
    for(int i=0; i*a<=n; i++){
        for(int j=0; j*b + i*a <=n; j++){
            int k = (n - (i*a + j*b))/c;
            if(i*a + j*b + k*c == n) ans = max(ans , (i+j+k));
        }
    }
    cout << ans;
    return 0;
}