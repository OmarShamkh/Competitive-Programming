#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz

    freopen("collectingofficer.in", "r", stdin);

    
    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = n+1;
        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j=i; j<n; j++){
                if(s[j] - 'A' == cnt) cnt++;
                if(cnt == 26){
                    ans = min(ans, j-i+1);
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}