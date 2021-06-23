#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 35;
bool prim[N];
int nums[20] ={1};
int n;
void solve(int idx , bool vis[]){
    if(idx == n){
        if(!prim[nums[n-1] + 1])  return;
        cout << 1 ;
        for(int i=1; i<n; i++){
            cout << " " << nums[i];
        }
        cout << "\n";
        return;
    }
    for(int i=2; i<=n; i++){
        if(vis[i] || !prim[i+nums[idx-1]]) continue;
        //pick
        vis[i] = true;
        nums[idx] = i;
        solve(idx+1 , vis);

        //leave
        vis[i] = false;
    }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    for(int i=1; i<=32; i++){
        prim[i] = true;
        for(int j=2; j<i; j++){
            if(i%j == 0) prim[i] = false;
        }
    }
    //scanf("%d", &n) != EOF
    int tc = 1;
    while (scanf("%d", &n) != EOF)
    {
        bool vis[20] = {0};
        if(tc > 1)  cout << "\n";
        cout << "Case "<< tc++ << ":\n";
        solve(1,vis);
        
    }
    
    return 0;
}