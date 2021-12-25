#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e4;
char grid[N][N];
bool vis[N][N];
int cnt = 1, n;
bool valid(int x, int y){
    return (x>=0 && x<n && y>=0 && y<n && grid[x][y] != 'X');
}
int dx[] = {0, 0, 1, -1, -1, -1, 1, 1};
int dy[] = {1, -1, 0, 0, -1, 1, -1, 1};

void dfs(int x, int y){
    vis[x][y] = true;
    for(int i=0; i<4; i++){               
        int newx = x+dx[i] , newy = y+dy[i];
        if(valid(newx,newy) && !vis[newx][newy]){
            cnt++;
            dfs(newx, newy);
        }
    }
}
vvvvvvvvvv
int main()
{
    INGZzz
    
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }
    dfs(0,0);
    cout << cnt << "\n";
    return 0;
}