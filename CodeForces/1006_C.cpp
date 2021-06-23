#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 2e5 + 10;
ll n, a[N], pre[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pre[i] = a[i];
        if (i) pre[i] += pre[i - 1];
    }
    //for(int i=0; i<n; i++) cout << pre[i] << " ";
    ll sum = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += a[i];
        int st = 0, en = i - 1, mid;
        while (st <= en)
        {
            mid = st + (en - st) / 2;
            if (pre[mid] == sum)
            {
                ans = max(ans, sum);
                break;
            }
            else if (pre[mid] > sum)
                en = mid - 1;
            else
                st = mid + 1;
        }
    }
    cout << ans << "\n";
    return 0;
} 