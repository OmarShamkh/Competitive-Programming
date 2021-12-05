#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 4e5+5;

void solve(int n, int k){
    vector<vector<int>> adj(n+1);
    vector<int> cnt(n+1);
    if(n == 1) cnt[n]++;
    for(int i=1; i<n; i++){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cnt[u]++; cnt[v]++;
    }
    set<int>leaves;
    for(int i=1; i<=n; i++){
        if(cnt[i] == 1){
            leaves.insert(i);
        }
    }
    int ans = n;
    set<int> rem;
    while(k--){
        if(ans == 0) break;
        for(int u : leaves){
            cnt[u]--;
            ans--;
            for(int ch : adj[u]){
                cnt[ch]--;
                if(cnt[ch] == 1){
                    rem.insert(ch);
                }
            }
        }
        leaves = rem;
        rem.clear();
    }
    cout << ans << "\n";
}
int main()
{
    INGZzz

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        solve(n,k);
    }
    
    return 0;
}