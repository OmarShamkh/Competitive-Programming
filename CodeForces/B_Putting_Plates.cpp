#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 22;
int h,w;
int g[N][N];
bool ok(int i, int j){
    return ( (i==1 || i==h) && (j&1) && (j+2 <=w) || (j==1 || j==w) && (i&1) && (i+2 <=h) || j==w && (i&1));
}
int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        cin >> h >> w;
        for(int i=1; i<=h; i++){
            for(int j=1 ;j<=w; j++){
                if(ok(i,j)) g[i][j] = 1;
                else g[i][j] = 0;
            }
        }
        for(int i=1; i<=h; i++){
            for(int j=1 ;j<=w; j++){
                cout << g[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    
    return 0;
}