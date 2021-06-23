#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    string s, t;
    cin >> s >> t;
    
    if(s == t){
        cout <<"=";
        return 0;
    }
    string s1,n1,t1,n2;
    for(int i=0; i<s.size(); i++){
        if(s[i] >='a' && s[i] <='z') s1+=s[i];
        else n1+=s[i];
    }
    for(int i=0; i<t.size(); i++){
        if(t[i] >='a' && t[i] <='z') t1+=t[i];
        else n2+=t[i];
    }
    //cout << s1 << "\n" << t1;
    if(s1 < t1) cout <<"<";
    else if(s1 > t1) cout <<">";
    else{
        if(n1.size() < n2.size()) cout <<"<";
        else if(n1.size() > n2.size()) cout <<">";
        else{
            if(n1 < n2) cout <<"<";
            else if(n1 > n2) cout <<">";
            else cout <<"=";
        }
    }

    
    return 0;
}