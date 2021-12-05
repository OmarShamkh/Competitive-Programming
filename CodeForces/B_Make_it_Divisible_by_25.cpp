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
        string s;
        cin >> s;
        // vector<string> v {"00" , "25" , "50" , "75"};
        int n = s.length() , ans = n;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int cur = (s[i]-'0')*10 + s[j]-'0';
                if(cur%25==0){
                    ans = min(ans, n-i-2);
                }
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}