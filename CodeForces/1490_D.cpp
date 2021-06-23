#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
int a[N] , b[N];
void solve(int l, int r, int d){
    if(l > r) return;
    int ma = l;
    for(int i=l; i<=r; i++){
        if(a[i] > a[ma]) ma = i;
    }
    b[ma] = d;
    solve(l,ma-1, d+1);
    solve(ma+1 , r, d+1);
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        solve(0,n-1,0);
        for(int i=0; i<n; i++) cout << b[i] << " ";
        cout << "\n";
    }
    return 0;
}