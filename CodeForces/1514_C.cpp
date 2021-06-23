#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+10;
int n;
vector<int>ans;
int main()
{
    INGZzz
    cin >> n;
    ll prod = 1;
    for(int i=1; i<=n; i++){
        if(__gcd(i,n) == 1){
            ans.push_back(i);
            prod *= i;
            prod %= n;
        }
    }
    if(prod != 1){
        ans.pop_back();
    }
    cout << ans.size() << "\n";
    for(auto i : ans) cout << i << " ";
    return 0;
}