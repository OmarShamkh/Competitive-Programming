#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 22;
int t, v, n, m;
int F[N], C[N];
ll ans = 1e18;
void solve(int gate, ll sum, ll cost)
{
    if (gate == n)
    {
        if (sum * t >= v)
        {
            ans = min(ans, cost);
        }
        return;
    }
    solve(gate + 1, sum + F[gate], cost + C[gate]);
    solve(gate + 1, sum, cost);
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int tc = 1;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> F[i] >> C[i];
    
    cin >> m;
    while (m--)
    {
        ans = 1e18;
        cin >> v >> t;
        solve(0, 0, 0);
        cout << "Case " << tc++ << ": ";
        if (ans == 1e18)
            cout << "IMPOSSIBLE\n";
        else
            cout << ans << "\n";
    }

    return 0;
}