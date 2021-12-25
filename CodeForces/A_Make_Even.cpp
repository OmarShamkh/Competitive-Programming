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
        if((s[s.size()-1]-'0')%2 == 0){
            cout << "0\n";
        }
        else if((s[0]-'0')%2 == 0){
            cout << "1\n";
        }
        else{
            int ans = -1;
            for(char c : s){
                if((c-'0') %2==0){
                    ans = 2;
                    break;
                }
            }
            cout << ans << "\n";
        }
        
    }

    return 0;
}