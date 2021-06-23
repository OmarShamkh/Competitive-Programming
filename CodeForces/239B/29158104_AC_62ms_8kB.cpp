#include <bits/stdc++.h>
using namespace std;

void solve_substr(string s)
{
    int fr[10] = {0};
    int cp = 0, Dp = 1;
    while (cp >= 0 && cp < s.size())
    {
        if (s[cp] >= '0' && s[cp] <= '9')
        {
            fr[s[cp] - '0']++;
            if (s[cp] == '0')
            {
                s.erase(cp, 1);
                if (Dp == -1)
                {
                    cp--;
                }
            }
            else
            {
                s[cp]--;
                cp += Dp;
            }
        }
        else
        {
            if (s[cp] == '>')
                Dp = 1; //right
            else
                Dp = -1; //left

            cp += Dp;
            if (cp >= 0 && (s[cp] == '>' || s[cp] == '<') && cp < s.size())
            {
                s.erase(cp - Dp, 1);
                if (Dp == 1)
                    cp--;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << fr[i] << " ";
    }
    cout << "\n";
}
int n, q;
string s;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> q;
    cin >> s;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        solve_substr(s.substr(l - 1, r - l + 1));
    }

    return 0;
}