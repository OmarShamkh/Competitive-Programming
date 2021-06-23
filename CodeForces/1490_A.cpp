#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
int a[60];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n-1; i++){
            int ma = max(a[i],a[i+1]);
            int mi = min(a[i],a[i+1]);
            while (mi*2 < ma)
            {
                cnt++;
                mi *= 2;      
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}