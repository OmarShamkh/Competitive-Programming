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
    int n,m;
    cin >> n >> m;
    for(int i=1; i<=2*n; i++){
        if((2*n+i) <= m) cout << 2*n+i << " ";
        if(i <= m) cout << i << " ";
    }
    return 0;
}