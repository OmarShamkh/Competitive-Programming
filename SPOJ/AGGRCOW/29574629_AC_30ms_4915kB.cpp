#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 2e5 + 10;
int n, t, c, a[N];
bool ok(int x)
{
    int prev = -1, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - prev >= x || prev == -1)
        {
            prev = a[i];
            cnt++;
            if (cnt == c) return true;
        }
    }
    return false;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        int st = 1, en = 1e9, mid;
        while (st < en)
        {
            mid = st + (en - st + 1) / 2;
            if (ok(mid)) st = mid;
            else en = mid - 1;
        }
        cout << st << "\n";
    }

    return 0;
}