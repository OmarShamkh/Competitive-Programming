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
        int k;
        cin >> k;
        vector<int>v;
        for(int i=1; i<=2000; i++){
            if(i%3 == 0 || i%10 == 3) continue;
            v.push_back(i);
        }
        cout << v[k-1] << "\n";
    }
    
    return 0;
}