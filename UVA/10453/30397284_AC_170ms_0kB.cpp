#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3+10;
string s;
int n , mem[N][N];
int dp(int st, int en){
    if(st >= en) return 0;
    int &ret = mem[st][en];
    if(~ret) return ret;
    if(s[st] == s[en]) return ret = dp(st+1 , en -1);
    return ret = min(dp(st, en-1) , dp(st+1, en)) + 1;
}
void print(int st, int en){
    if(st > en) return;

    if(s[st] == s[en]){
        cout<< s[st];
        print(st+1 , en-1);
        if(st != en) cout<<s[st];
        return;
    }
    else if(dp(st,en) == dp(st+1,en) + 1){
        cout<<s[st];
        print(st+1,en);
        cout<<s[st];
    }
    else if(dp(st,en) == dp(st,en-1) + 1){
        cout<<s[en];
        print(st,en-1);
        cout<<s[en];
    }
}
int main()
{
    INGZzz
    //cin >> n;
    while(cin >> s){
        memset(mem , -1, sizeof mem);
        
        cout << dp(0,s.size()-1) << " ";
        print(0,s.size()-1);
        cout << "\n";
    }
    return 0;
}