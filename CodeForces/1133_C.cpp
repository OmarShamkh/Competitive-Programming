#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 2e5 + 10;
int n , a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n ;
    for(int i =0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    int l = 0 , r =0 , ans = 0;
    while(r<n){
        if(a[r] - a[l] <= 5) {
            ans = max(ans , r-l+1);
            r++;
        }
        else l++;
    }
    cout << ans;
    return 0;
}