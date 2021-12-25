#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n, sum = 1;
        cin >> w >> h >> n;
        while (w % 2 == 0)
        {
            w = w / 2;
            sum = sum * 2;
        }
        while (h % 2 == 0)
        {
            h = h / 2;
            sum = sum * 2;
        }
        if (sum < n)
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
    }

    return 0;
}