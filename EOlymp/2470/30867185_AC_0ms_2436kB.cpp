#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3;
int n , adj[N][N];

int main()
{
    INGZzz
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> adj[i][j];
        }
    }
    bool check = true;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(adj[i][j] != adj[j][i] || adj[i][j] && i==j ){
                check = false;
                break;
            }
        }
    }
    cout << (check ? "YES\n" : "NO\n");
    return 0;
}