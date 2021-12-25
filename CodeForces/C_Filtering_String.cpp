#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    string s;
    cin >> s;
    for(int i=1; i<s.length(); i++){
        if(s[i] == s[i-1]){
            return cout << "NO\n" , 0;
        }
    }
    cout << "YES\n";
    return 0;
}