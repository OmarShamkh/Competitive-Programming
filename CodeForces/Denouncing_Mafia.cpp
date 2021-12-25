#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+10;
vector<int> adj[N];
int maxdeep[N];
pair<int,int> p[N];

void dfs(int node, int depth){
    p[node] = {depth,node};
    for(auto ch : adj[node]){
        dfs(ch , depth+1);
        p[node] = max(p[node], p[ch]);
    }
    // cout <<node <<  " " << p[node].first << " " <<  p[node].second<< "\n";
    maxdeep[p[node].second]++; //cnt
}

int main()
{
    INGZzz
    int n,k;
    cin >> n >> k;
    for(int i=2; i<=n; i++){
        int u ; cin >> u;
        adj[u].push_back(i);
    }
    dfs(1 , 0);
    sort(maxdeep+1,maxdeep+n+1, greater<int>());
    for(int i=1; i<=n; i++){
        cout << maxdeep[i] <<" ";
    }
    int sum = 0;
    for(int i=1; i<=k; i++){
        sum += maxdeep[i];
    }
    cout << sum ;
    return 0;
}