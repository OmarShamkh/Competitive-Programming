#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    freopen("mosalah.in", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        int avg ,goals,matches,rem;
        cin >> avg >> goals >> matches >> rem;
        if(rem == 0 && avg*(matches+rem) > goals) cout  << "-1\n";
        else if(avg*(matches+rem) < goals) cout << "0\n";
        else cout << avg * (matches+rem) - goals <<"\n";
    }
    
    return 0;
}