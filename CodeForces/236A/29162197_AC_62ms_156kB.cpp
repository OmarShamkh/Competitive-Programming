#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    set<char> st;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    cout << ((st.size() & 1) ? "IGNORE HIM!" : "CHAT WITH HER!");
    return 0;
}