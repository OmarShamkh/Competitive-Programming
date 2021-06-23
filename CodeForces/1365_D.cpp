#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 60;
int t,n,m , cntGood ;
char grid[N][N];
bool vis[N][N];
int dx[]={0, 0, 1, -1};
int dy[]={1, -1, 0, 0};
bool valid(int x, int y){
    return (x<n && x>=0 && y<m && y>=0);
}
void dfs(int r, int c){
    
    if(grid[r][c] == 'G') cntGood++;
    vis[r][c] = true;

    for(int i=0; i<4; i++){
        if(valid(r+dx[i] , c+dy[i]) && grid[r+dx[i]][c+dy[i]] != '#' && !vis[r+dx[i]][c+dy[i]]){
            dfs(r+dx[i] , c+dy[i]);
        }
    }
}
int main()
{

    INGZzz
    cin >> t;
    while(t--){ 
        memset(vis , 0 , sizeof vis);
        cin >> n >> m;
        cntGood = 0;
        int good = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> grid[i][j];
                good += (grid[i][j] == 'G');
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 'B'){
                    for(int k =0; k<4; k++){
                        if(valid(i+dx[k] , j+dy[k]) && grid[i+dx[k]][j+dy[k]] !='B'){
                            grid[i+dx[k]][j+dy[k]] = '#';
                        }
                    }
                }
            }
        }
        if(grid[n-1][m-1] == '.') dfs(n-1 , m-1);
        cout << (cntGood == good ? "Yes\n" : "No\n");
    }
    return 0;
}