#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
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
        string x1,x2;
        ll p1,p2;
        cin >> x1 >> p1 >> x2 >> p2;
        if(x1.size()+ p1 == x2.size() + p2){
            while(x1.size() < x2.size()) x1 += '0';
            while(x1.size() > x2.size()) x2 += '0';
            if(x1 > x2) cout << ">\n";
            else if(x1 < x2) cout << "<\n";
            else cout << "=\n";
        }
        else if(x1.size() + p1 > x2.size() + p2) cout << ">\n";
        else cout << "<\n";

    }

    return 0;
}