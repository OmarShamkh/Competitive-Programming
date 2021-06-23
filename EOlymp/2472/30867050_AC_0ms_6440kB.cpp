#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
int n, k;

int main()
{
    INGZzz
    cin >> n >> k;
    vector<vector<int>>adj(n+5);
    while(k--){
        int op;
        cin >> op;
        if(op == 1){
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        else{
            int u;
            cin >> u;
            for(auto i : adj[u]) cout << i <<" ";
            
        }
    }
    return 0;
}