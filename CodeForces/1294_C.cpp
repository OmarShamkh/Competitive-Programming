#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e8;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v;
        for(int i=2; i*i <= n; i++){
            if(n % i == 0){
                v.push_back(i);
                n /= i;
            }
            if(v.size() == 2) break;
        }
        if(n == 1 || v.size() < 2 || v[1] == n ) cout << "NO\n";
        else{
            cout<<"YES\n";
            for(auto i : v) cout << i << ' ';
            cout << n << "\n";
        }
    }
    return 0;
}