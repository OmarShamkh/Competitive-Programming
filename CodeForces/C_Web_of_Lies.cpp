#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+5;
int cnt[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int n,m,q;
    cin >> n >> m;
    int ans = n;
    for(int i=1; i<=m; i++){
        int u,v;
        cin >> u >> v;
        if(u > v) swap(u,v);
        if(cnt[u] == 0) ans--;
        cnt[u]++;
    }
    cin >> q;
    while(q--){
        int t; cin >> t;
        if(t == 3) cout << ans << "\n";
        else if(t == 1){
            int u,v;
            cin >> u >> v;
            if(u > v) swap(u,v);
            if(cnt[u] == 0) ans--;
            cnt[u]++;
        }
        else if(t == 2){
            int u,v;
            cin >> u >> v;
            if(u > v) swap(u,v);
            cnt[u]--;
            if(cnt[u] == 0) ans++;
        }
    }
    
    return 0;
}