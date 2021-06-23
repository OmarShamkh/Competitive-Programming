#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 3e5+10;
int n,m,a[N],b[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n;
    ll sum1 = 0 , sum2 = 0;
    for(int i=0; i<n; i++) cin >> a[i] , sum1 +=a[i];
    cin >> m;
    for(int i=0; i<m; i++) cin >> b[i] , sum2 +=b[i];

    if(sum1 != sum2){
        cout << -1 << "\n";
        return 0;
    }

    int ra = 0 , rb = 0 , cnt = 0;   
    while(ra < n && rb < m){
        ++cnt;
        ll suma = a[ra++] , sumb = b[rb++];
        while(suma != sumb){
            if(suma < sumb) suma += a[ra++];
            else sumb += b[rb++];
        }
        //cout << suma << " " << sumb << "\n";
    }
    cout << cnt << "\n";
    return 0;
}