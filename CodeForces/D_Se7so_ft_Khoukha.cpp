#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    int a,b,x;
    cin >> a >> b >> x;
    set<int>st;
    for(int i=a; i<=min(a+x-1 , b); i++) st.insert(i);
    for(int i=b; i>=max(b-x+1, a); i--) st.insert(i);
    for(auto it: st) cout << it << "\n";
    
    return 0;
}