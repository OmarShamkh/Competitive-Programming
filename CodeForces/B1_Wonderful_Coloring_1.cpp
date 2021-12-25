#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
                      
int main()
{
    INGZzz

    int t;
    cin >> t;
    while(t--){
        string s; cin >> s;
        int fr[26] = {0};
        set<char>st,st2;
        for(int i = 0; i <s.size(); i++){
            fr[s[i] - 'a']++;
        }
        for(int i=0; i<s.size(); i++){
            if(fr[s[i] - 'a'] > 1) st.insert(s[i]);
            else st2.insert(s[i]);
        }
        cout <<  st.size() + st2.size()/2 << "\n";
    }
    return 0;
}