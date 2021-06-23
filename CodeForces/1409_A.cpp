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
        int a, b;
        cin >> a >> b;
        if(a == b){
            cout << "0\n";
        }
        else if(a < b){
            int x = b - a ;
            if(x % 10 == 0) cout << (x/10) << "\n";
            else cout << (x/10) +1 << "\n";
        }
        else{
            int x = a - b ;
            if(x % 10 == 0) cout << (x/10) << "\n";
            else cout << (x/10) +1 << "\n";
        }
    }
    return 0;
}