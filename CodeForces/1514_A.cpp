#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3;
int t,n;
bool checkperf(int n)
{
    if(ceil((double)sqrt(n)) == floor((double)sqrt(n))){
        return 1;
    }
    return 0;
}
int main()
{
    INGZzz
    cin >> t;
    while(t--){
        cin >> n;
        bool f = false;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(!checkperf(x)){
                f = true;
                //break;
            }
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}