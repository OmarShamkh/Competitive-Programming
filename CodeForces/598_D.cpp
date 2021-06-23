#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3+10 , M = 1e6+10;
char c[N][N];
int vis[N][N] , ans[M];
int n,m,k;
int dx[]={0, 0, 1, -1};
int dy[]={1, -1, 0, 0};
bool valid(int x, int y){
    return (x<n && y<m && x>=0 && y>=0 && c[x][y] == '*' && !vis[x][y]);
}
int cnt = 0 ,id;
void dfs(int x, int y){
    if(x>=n || y>=m || x<0 || y<0 ) return;
    if(c[x][y] == '*'){
        cnt++;
        return;
    }
    if(vis[x][y]) return;
    vis[x][y] = id;
    for(int i=0; i<4; i++){
        dfs(x + dx[i] , y + dy[i]);
    }
}
int main()
{
    INGZzz
    cin >> n >> m >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> c[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!vis[i][j] && c[i][j] == '.'){
                cnt = 0;
                id++;
                dfs(i,j);
                //cout << cnt << "\n";
                ans[id] = cnt;
            }
        }
    }
    while(k--){
        int x,y;
        cin >> x >> y;
        --x,--y;
        cout << ans[vis[x][y]] << "\n";
    }
    return 0;
}