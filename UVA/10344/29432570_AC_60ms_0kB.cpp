#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 6;
int a[N];
bool solve(int idx , int sum){
    if(idx == 5){
        return (sum == 23);
    }
    return solve(idx+1,sum-a[idx])||
           solve(idx+1,sum+a[idx])||
           solve(idx+1,sum*a[idx]);
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    while(true){
        for(int i=0; i<5; i++) cin >> a[i];
        if(a[0] == 0) break;
        sort(a,a+5);
        bool chk = false;
        do
        {
            chk = solve(1,a[0]);
            if(chk) break;
             
        } while (next_permutation(a,a+5));
        if(chk) cout << "Possible\n";
        else cout << "Impossible\n";
    }
    
    return 0;
}