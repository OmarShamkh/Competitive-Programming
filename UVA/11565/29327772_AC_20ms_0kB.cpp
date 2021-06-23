#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 1e5;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        bool f = false;
        cin >> a >> b >> c;
        for (int i = -22; i <= 22 && !f; i++)
        {
            for (int j = -100; j <= 100 && !f; j++)
            {
                for (int k = -100; k <= 100 && !f; k++)
                {
                    if (i != j && j != k && i != k && (i + j + k) == a && i * j * k == b && (i * i + j * j + k * k) == c)
                    {
                        cout << i << " " << j << " " << k << "\n";
                        f = true;
                    }
                }
            }
        }
        if (!f)
            cout << "No solution.\n";
    }
    return 0;
}