#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    // freopen("coffe.in", "r", stdin);    
    int t;
    cin >> t;
    while(t--){
        int c,p;
        cin >> c >> p;
        vector<vector<int>>v;
        while(c--){
            string n;
            cin >> n;
            vector<int> v(3);
            for(int i=0; i<3; i++){
                int size; cin >> size;
                v[i] = size;
            }
            mp[n] = v;
        }
        while(p--){
            string x,y,z;
            cin >> x >> y >> z;
            int ans = 100/p + mp[z][1];
            cout << x << ' ' << ans << "\n";
        }
    }
    
    return 0;
}