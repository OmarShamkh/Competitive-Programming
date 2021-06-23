#include <bits/stdc++.h>
 
using namespace std;
int a , b ;
int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(') a++;
        if(s[i] == ')' && a > 0) b++ , a--;
    }
    cout << b*2;
    return 0;
}