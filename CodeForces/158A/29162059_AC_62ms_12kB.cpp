#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[52];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0 && a[i] >= a[k - 1])
            ans++;
    }
    cout << ans;
    return 0;
}