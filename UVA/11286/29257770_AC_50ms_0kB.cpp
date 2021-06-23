#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    while (cin >> n && n)
    {
        map<vector<int>, int> mp;
        for (int i = 0; i < n; i++)
        {
            vector<int> v(5);
            for (auto i : v)
            {
                int x;
                cin >> x;
                v.push_back(x);
            }
            sort(v.begin(), v.end());
            mp[v]++;
        }

        int mx = 0;
        for (auto i : mp)
        {
            mx = max(mx, i.second);
        }
        int ans = 0;
        for (auto i : mp)
        {
            if (i.second == mx)
                ans += mx;
        }
        cout << ans << "\n";
    }

    return 0;
}