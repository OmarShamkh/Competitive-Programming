#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
typedef long long ll;
#define INGZzz  cin.tie(0); cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    int n;
    cin >> n;
    string a,b,c;
    cin >> a >> b >> c;
    for(int i=0; i<n; i++){
        if (a[i] == b[i]) cout << a[i];
        else if(b[i] == c[i]) cout << b[i];
        else cout << c[i];
    }

    return 0;
}