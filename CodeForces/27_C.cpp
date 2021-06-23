#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
int n, a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=1; i<n-1; i++){
        if(a[0] < a[i] && a[i] > a[i+1] || a[0] > a[i] && a[i] < a[i+1]){
            cout << 3 << "\n";
            cout << 1 <<' '<< i+1 << ' '<< i+2 ;
            return 0;
        }
    }
    cout << 0;
}