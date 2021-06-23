#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3;
int n , m, adj[N][N];
set<pair<int,int>> edges;
int main()
{
    INGZzz
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int x,y;
        cin >> x >> y;
        edges.insert({x,y});
    }
    cout << (m == edges.size() ? "NO\n" : "YES\n");
    return 0;
}