#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 1e5;
bool different(int a, int b)
{
    set<int> s;
    for (int i = 0; i < 5; i++)
    {
        s.insert(a % 10);
        a /= 10;
        s.insert(b % 10);
        b /= 10;
    }
    return (s.size() == 10);
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n, cnt = 0;
    vector<int> ans;
    while (cin >> n && n)
    {
        if (cnt++)
            cout << "\n";
        for (int i = 01234; i <= 98765 / n; i++)
        {
            int j = n * i;
            if (j <= 98765 && different(i, j))
                ans.push_back(i);
        }
        if (ans.empty())
            cout << "There are no solutions for " << n << ".\n";
        else
        {
            for (auto i : ans)
            {
                cout << i * n << " / ";
                if (i < 10000)
                    cout << 0;
                cout << i << " = " << n << "\n";
            }
        }
        ans.clear();
    }
    return 0;
}