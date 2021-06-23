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
    int n,m,ans=0;
    cin >> n >> m;
    for(int a=0; a<=max(n,m); a++){
        for(int b=0; b<=max(n,m); b++){
            if(a*a +b == n && a+ b*b==m) ans++;
        }
    }
    cout << ans;
    return 0;
}