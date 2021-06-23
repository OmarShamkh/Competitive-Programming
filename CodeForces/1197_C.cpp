#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 3e5+10;
int a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,k;
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    int ans = 0;
    vector<int> dif(n);
    for(int i=1; i<n; i++){
        dif[i] = a[i] - a[i-1];
        ans += dif[i];
    }
    sort(dif.begin(),dif.end(),greater<int>());
    for(int i=0; i<k-1; i++) ans -= dif[i];
    cout << ans;
    return 0;
}