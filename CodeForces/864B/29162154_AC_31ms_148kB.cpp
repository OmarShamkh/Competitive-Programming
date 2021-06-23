#include <bits/stdc++.h>
using namespace std;
int n;
string s;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> s; //aaaaBaabAbA
    set<char> st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (islower(s[i]))
        {
            st.insert(s[i]);
            int siz = st.size();
            ans = max(ans, siz);
        }
        else
            st.clear();
    }
    cout << ans;
    return 0;
}