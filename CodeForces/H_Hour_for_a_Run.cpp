#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    int n,v;
    cin >> n >> v;
    for(int i=1; i<=9; i++) cout << ((n*v*i + 9 )/10)<<" ";
    return 0;
}