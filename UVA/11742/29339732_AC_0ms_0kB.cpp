#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 8, M = 20;
int teens[N], constrains[M][3];
int n, m;

int find_teen(int x)
{
    for (int i = 0; i < n; i++)
        if (teens[i] == x)
            return i;
}
bool valid_constrain(int a, int b, int c)
{
    int idx1 = find_teen(a);
    int idx2 = find_teen(b);
    if (c > 0)
        return (abs(idx1 - idx2) <= c);
    else
        return (abs(idx1 - idx2) >= abs(c));
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    while (true)
    {
        cin >> n >> m;
        if (n + m == 0)
            break;
        for (int i = 0; i < n; i++)
            teens[i] = i;
        for (int i = 0; i < m; i++)
        {
            cin >> constrains[i][0] >> constrains[i][1] >> constrains[i][2];
        }
        int ans = 0;
        do
        {
            bool valid = true;
            for (int i = 0; i < m; i++)
            {
                if (!valid_constrain(constrains[i][0], constrains[i][1], constrains[i][2]))
                {
                    valid = false;
                    break;
                }
            }
            if (valid)
                ans++;
        } while (next_permutation(teens, teens + n));

        cout << ans << "\n";
    }

    return 0;
}