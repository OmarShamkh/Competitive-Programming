#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 2e5+10;
int t,n;
vector<int>v[N];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) v[i].clear();
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v[x].push_back(i);
        }
        int ans = 1e9;
        for(int i=1; i<=n; i++){
            if(v[i].empty()) continue;
            int cnt = 0 , prev = -1;
            for(auto &j : v[i]){
                cnt += ((j-1)!= prev);
                prev = j;
            }
            cnt += (n-1 != prev);
            ans = min(ans , cnt);
        }
        cout << ans << "\n";
    }
    return 0;
}