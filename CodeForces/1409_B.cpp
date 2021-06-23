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
    int t;
    cin >> t;
    while(t--){
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll ans = 1e18;
        for(int i=0; i<2; i++){
            int mi_a = min(a-x , n);
            int mi_b = min(b-y , n- mi_a);
            ans = min(ans , (a-mi_a)* 1LL *(b-mi_b));
            swap(a,b);
            swap(x,y);
        }
        cout << ans << "\n";
    }
    
    return 0;
}