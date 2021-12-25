#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz

    freopen("equal.in", "r", stdin);    

    int t = 1;
    cin >> t;
    while(t--){
        set<int>st;
        for(int i=0; i<3; i++){
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << (st.size() == 3 ? "NO\n" : "YES\n");
    }
    
    return 0;
}