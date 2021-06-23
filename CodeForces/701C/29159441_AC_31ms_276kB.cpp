#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, M = 250;
int n;
string s;
int count_diff_chars()
{
    int fr[M] = {0};
    for (int i = 0; i < s.size(); i++)
        fr[s[i]]++;
    int cnt = 0;
    for (int i = 0; i < M; i++)
    {
        if (fr[i] != 0)
            cnt++;
    }
    return cnt;
}
int fr[M];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> s;
    int numOf_diff = count_diff_chars();
    int ans = n, p = 0, cur_char = 0;
    for (int i = 0; i < n; i++)
    {
        if (fr[s[i]] == 0)
            cur_char++;
        fr[s[i]]++;
        while (fr[s[p]] > 1)
        {
            fr[s[p]]--;
            p++;
        }
        if (cur_char == numOf_diff)
        {
            ans = min(ans, i - p + 1);
        }
    }
    cout << ans;
    return 0;
}