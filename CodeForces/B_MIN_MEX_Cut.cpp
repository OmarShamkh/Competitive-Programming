#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define len(s)   (int)s.length()
#define sz(v)    (int)v.size()
#define all(a)   a.begin(),a.end()
const int N = 1e5, OO = 0x3f3f3f3f, mod = 1e9 + 7;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt0 = 0 , cnt1 = 0 , cnt = 0;
        for(int i=0; i<s.length(); i++){
            cnt0 += s[i] == '0';
            cnt1 += s[i] == '1';
        }
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0'){
                cnt++;
                while(s[i] == '0' && i <s.length()){
                    i++;
                }
            }
        }
        if(cnt0 && !cnt1){//0000
            cout << "1\n";
        }
        else if(!cnt0 && cnt1){//11111
            cout << "0\n";
        }
        else {//101
            cout << min(cnt , 2) << "\n";
        }
    }
    
    return 0;
}