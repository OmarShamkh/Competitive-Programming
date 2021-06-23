#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 3e5+10;
int n,k , a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    int ans = 0 ,cnt = 0, l =0 , r =0;
    for(int i=1 , j=1; i<=n; i++){  
        if(!a[i]) cnt++;
        while(cnt > k){
            if(!a[j++]) cnt--;
        }
        if(i-j+1 > ans){
            ans = i-j+1;
            l = j , r = i;
        }
    }
    //cout << l << " " << r << "\n";
    for(int i=l; i<=r; i++)  a[i] = 1;
    cout << ans << "\n";
    for(int i=1; i<=n; i++) cout << a[i] << " ";
    return 0;
}