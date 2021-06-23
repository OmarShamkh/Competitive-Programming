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
        ll n;
        cin >> n;
        while(n%2 == 0){
            n /=2;
        }
        cout << (n > 1 ? "YES\n" : "NO\n");
    }
    return 0;
}