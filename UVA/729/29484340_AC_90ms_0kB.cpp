#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
int n,h,t;

void solve(int n, int h,string ans){
    if(ans.size() == n){
        if(h == 0)cout << ans << "\n";
        return; 
    }
    solve(n,h,ans+'0'); // 
    solve(n,h-1,ans+'1'); // 
    
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> t;
    while(t--){
        cin >> n >> h;
        string ans = "";
        solve(n,h,ans);
        if(t) cout <<"\n";
    }
    return 0;
}