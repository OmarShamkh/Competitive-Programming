#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    vector<string>v;
    set<string>st;
    while(n--){
        string s;
        cin >> s;
        v.push_back(s);
    }
    for(int i=v.size()-1; i>=0; i--){
        if(!st.count(v[i])){
            cout << v[i] << "\n";
            st.insert(v[i]);
        }
    }
    return 0;
}