#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    float a,b,n,ans = 1e6f;
    cin >> a >> b >> n;
    while (n--)
    {
        float x,y,v;
        cin >> x >> y >> v;
        float distanc = sqrt((x-a)*(x-a) + (y-b)*(y-b));
        ans = min(ans, distanc/v);
    }
    cout << fixed << setprecision(10) << ans;
    return 0;
}