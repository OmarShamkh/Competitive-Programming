#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{

    int t;
    cin >> t;
    while(t--){
        int xa,ya,xb,yb,fa,fb , dis;
        cin >> xa >> ya >> xb >> yb >> fa >> fb;
        dis = abs(xa - xb) + abs(ya - yb);
        if(xa == xb && xa == fa && fb >= min(ya , yb) && fb <= max(ya , yb) ) cout << dis + 2 << "\n";
        else if(ya == yb && ya == fb && fa >= min(xa , xb) && fa <= max(xa , xb) ) cout << dis + 2 << "\n";
        else cout << dis << "\n";

    }
    return 0;
}