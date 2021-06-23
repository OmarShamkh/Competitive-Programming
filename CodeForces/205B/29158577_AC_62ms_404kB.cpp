#include <bits/stdc++.h>
using namespace std;
int a[100001], n;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n;
    long long ans = 0;
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < a[i - 1])
            ans += a[i - 1] - a[i];
    }
    cout << ans;
    return 0;
}