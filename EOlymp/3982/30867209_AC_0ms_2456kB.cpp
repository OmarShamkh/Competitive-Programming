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
        int sz,x,y;
        cin >> sz;
        while(sz--){
            int x; cin >> x;
            adj[i][x] = 1;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}