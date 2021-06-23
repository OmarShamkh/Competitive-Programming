#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 1e5;
int a[101];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i == j || i == k || j == k)
                    continue;
                if (a[j] + a[k] == a[i])
                {
                    cout << i + 1 << ' ' << j + 1 << ' ' << k + 1 << "\n";
                    return 0;
                }
            }
        }
    }

    cout << -1;

    return 0;
}