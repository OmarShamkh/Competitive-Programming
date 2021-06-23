#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
vector<int>cur,ans;
int m,n,maxsum,a[20];
void solve(int idx, int sum){

    if(sum > n) return;
    if(sum > maxsum){
        maxsum = sum;
        ans = cur;
    }
    if(idx == m) return;
    //pick
    cur.push_back(a[idx]);
    solve(idx+1, sum+a[idx]);
    cur.pop_back();
    //leave
    solve(idx+1, sum);
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    while(cin >> n){
        maxsum = 0;
        ans.clear();
        cin >> m;
        for(int i=0; i<m; i++) cin >> a[i];
        solve(0,0);
        for(auto i : ans) cout << i << " ";
        cout <<"sum:"<<maxsum<<"\n";
    }
    return 0;
}