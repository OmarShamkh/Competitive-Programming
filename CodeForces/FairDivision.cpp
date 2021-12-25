#include <bits/stdc++.h>
using namespace std;
int a[2];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0, c1 = 0, c2 = 0;
        while (n--)
        {
            int x;
            cin >> x;
            sum += x;
            if (x == 1)
                c1++;
            else
                c2++;
        }
        if (c1 && c2)
            if (sum % 2 == 0)
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";
        else
        {
            if (c1 == 0)
            {
                if (c2 % 2 == 0)
                    cout << "YES"
                         << "\n";
                else
                {
                    cout << "NO"
                         << "\n";
                }
            }
            if (c2 == 0)
            {
                if (c1 % 2 == 0)
                    cout << "YES"
                         << "\n";
                else
                {
                    cout << "NO"
                         << "\n";
                }
            }
        }
    }

    return 0;
}