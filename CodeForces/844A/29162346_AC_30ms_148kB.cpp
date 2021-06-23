#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    set<char>st;
    string s;
    int k;
    cin >> s >> k;
    if(k > s.size()){
        cout << "impossible";
        return 0;
    }
    
    for(int i=0; i<s.size(); i++){
        st.insert(s[i]);
    }
    if(k < st.size()) cout << "0";
    else cout << k - st.size();
}