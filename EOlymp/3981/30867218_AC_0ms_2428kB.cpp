#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3;
int n , adj[N][N];
vector<int> adjlist[N];
int main()
{
    INGZzz
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> adj[i][j];
            if(adj[i][j]){
                adjlist[i].push_back(j);
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout << adjlist[i].size() << " ";
        for(auto it : adjlist[i]) cout << it << " ";
        cout << "\n";
    }
    return 0;
}