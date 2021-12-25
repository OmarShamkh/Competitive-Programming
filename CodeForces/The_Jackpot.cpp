#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    int n;
    while(cin >> n && n){
        int sum = 0 , ans = 0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            sum += x;
            ans = max(ans , sum);
            if(sum < 0) sum = 0;
        }
        if(ans) cout <<"The maximum winning streak is "<<ans<<".\n";
        else cout << "Losing streak.\n";
    }
    
    return 0;
}