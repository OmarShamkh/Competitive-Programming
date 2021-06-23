#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n, cnt=0;
        cin >> n;
        vector<int> a(3);
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            a[x%3]++;
        }
        for(int i=0; i<=3; i++){
            while(a[i%3] > n/3){
                cnt++;
                a[i%3]--;
                a[(i+1)%3]++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}