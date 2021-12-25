#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    map<char, string> mp;
    mp['0'] = "";
    mp['1'] = "";
    mp['2'] = "2";
    mp['3'] = "3";
    mp['4'] = "223";
    mp['5'] = "5";
    mp['6'] = "35";
    mp['7'] = "7";
    mp['8'] = "2227";
    mp['9'] = "2337";
    int n;
    string x, ans = "";
    cin >> n >> x;
    for (int i = 0; i < x.size(); i++)
    {
        ans += mp[x[i]];
    }
    sort(ans.rbegin(), ans.rend());
    cout << ans << "\n";
    return 0;
}
