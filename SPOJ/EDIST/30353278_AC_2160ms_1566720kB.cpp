#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e4;
string s1 , s2;
int t , mem[N][N];
int solve(int i , int j){
    if(i == -1) return j+1;
    if(j == -1) return i+1;
    if(mem[i][j] !=-1) return mem[i][j];
    int ret = solve(i-1 , j-1) + (s1[i] != s2[j]);
    ret = min(ret , min(solve(i-1 , j)+1 , solve(i, j-1)+1));
    return mem[i][j] = ret;
}
int main()
{
    INGZzz
    cin >> t;
    while(t--){
        memset(mem,-1,sizeof mem);
        cin >> s1 >> s2;
        cout <<  solve(s1.size()-1 , s2.size()-1) << "\n"; 
    }
    return 0;
}