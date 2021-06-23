#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n],c[n],ans[n];
        memset(ans,0,sizeof ans);

        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        for(auto &i : c) cin >> i;
        ans[0] = a[0];
        for(int i=1; i<n; i++){
            if(i+1 ==n){
                if(ans[0] != a[i] && ans[i-1] !=a[i]) ans[i] = a[i];
                else if(ans[0] != b[i] && ans[i-1] !=b[i]) ans[i] = b[i];
                else ans[i] = c[i];
                break;
            }
            if(ans[i-1] != a[i]) ans[i] = a[i];
            else if(ans[i-1] != b[i]) ans[i] = b[i];
            else ans[i] = c[i];
        }

        for(auto i : ans) cout << i << " ";
        cout <<"\n";
    }
    return 0;
}