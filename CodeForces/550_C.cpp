#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
int n , mem[105][8];
string s , ans;
int solve(int i, int m){
    if(i == n){
        if(m % 8 == 0) return 0;
        else return 1e9;
    }
    int &ret = mem[i][m];
    if(~ret) return ret;

    return ret = min( 1+ solve(i+1 , m) , solve(i+1, (m*10+(s[i]-'0'))%8));
}
void print(int i, int m){
    if(i == n) return;
    if(solve(i,m) == 1 + solve(i+1,m)){
        print(i+1,m);
    }
    else{
        ans.push_back(s[i]);
        print(i+1,(m*10+(s[i]-'0'))%8);
    }
}
int main()
{
    INGZzz
    memset(mem, -1, sizeof mem);
    cin >> s;
    n = s.size();
    int ret = solve(0,0);
    if(ret == n){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        print(0,0);
        cout << ans << "\n";
    }
    return 0;
}