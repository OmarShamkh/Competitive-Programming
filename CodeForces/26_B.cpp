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
    string s;
    cin >> s;
    stack<char> st;
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(') st.push(s[i]);
        else if(!st.empty()) cnt+=2 , st.pop();
    }
    cout << cnt;
    return 0;
}