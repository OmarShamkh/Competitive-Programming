#include <bits/stdc++.h>
using namespace std;
int t, n, c;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            if (st.count(a[i]))
            {
                st.insert(a[i] + 1);
            }
            else
            {
                st.insert(a[i]);
            }
        }
        cout << st.size() << "\n";
    }
    return 0;
}