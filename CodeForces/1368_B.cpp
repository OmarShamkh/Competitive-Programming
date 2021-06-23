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
    ll k;
    cin >> k;
    multiset <int> st;
    for(int i=0; i<10; i++) st.insert(1);
    ll cur = 1;
    while(cur < k){
        auto ans = *st.begin();
        st.erase(st.begin());
        cur /= ans;
        ans++;
        cur *= ans;
        st.insert(ans);
    }
    string s = "codeforces";
    int idx = 0;
    for(auto i : st){
        for(int j =0; j<i; j++){
            cout << s[idx];
        }
        idx++;
    }

    return 0;
}