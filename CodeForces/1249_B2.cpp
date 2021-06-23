#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+10;
int a[N],ans[N];
vector<int> v;
int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            ans[i] = 0;
        }
        for(int i=1; i<=n; i++){
            if(!ans[i]){
                v.clear();
                int cur = a[i];
                v.push_back(i);
                while(cur != i){
                    v.push_back(cur);
                    cur = a[cur];
                }
                for(auto it : v) ans[it] = v.size();
            }
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}