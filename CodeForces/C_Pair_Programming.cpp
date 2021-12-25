#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 105;
int a[N] , b[N];
int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        int k,n,m;
        vector<int>ans;
        cin >> k >> n >> m;
        for(int i=0;i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];
        bool ok = false;
        int p1 = 0, p2 = 0;
        for(int i=0; i<(n+m); i++){
            if(p1 <n && a[p1] <=k){
                ans.push_back(a[p1]);
                if(a[p1] == 0){
                    k++;
                }
                p1++;
            }
            else if(p2 <m && b[p2] <=k){
                ans.push_back(b[p2]);
                if(b[p2] == 0){
                    k++;
                }
                p2++;
            }
            else{
                ok = true;
                break;
            }
        }
        if(ok){
            cout << -1 << "\n";
        }
        else{
            for(auto i : ans) cout << i << " ";
            cout << "\n";
        }

    }
    return 0;
}