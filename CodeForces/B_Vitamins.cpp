#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+5;
int dp[N][8];

int main()
{

    INGZzz
    int n;
    cin >> n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<8; j++){
            dp[i][j] = 1e9;
        }
    }
    for(int i=0; i<n; i++){
        int cost; string s;
        cin >> cost >> s;
        int juice_mask = 0;
        for(int idx=0; idx<=2; idx++){
            char c = 'C' - idx;
            bool found = false;
            for(auto ch : s) if(ch == c) found = true;
            if(found) juice_mask += (1 << idx);
        }

        dp[0][0] = 0;
        for(int msk = 0; msk<8; msk++){
            dp[i+1][msk] = min(dp[i+1][msk], dp[i][msk]);
            dp[i+1][msk | juice_mask] = min(dp[i+1][msk | juice_mask], dp[i][msk] + cost);
        }
    }

    int ans = dp[n][7];
    cout << (ans == 1e9 ? -1 : ans) << "\n";

    return 0;
}