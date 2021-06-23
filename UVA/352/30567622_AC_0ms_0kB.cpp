#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 30; 
bool vis[N][N];
char a[N][N];
int dx[] = {1,-1,0,0,1,1,-1,-1};
int dy[] = {0,0,1,-1,1,-1,1,-1};
int n;
bool valid(int x, int y){
    return(x < n && y < n && x>=0 && y>=0 && a[x][y]=='1' && !vis[x][y]);
}
void dfs(int x, int y){
    vis[x][y] = true;
    for(int i=0; i<8; i++){
        if(valid(x+dx[i] , y+dy[i])){
            dfs(x+dx[i], y+dy[i]);
        }
    }
}
int main()
{
    INGZzz
    int t = 1;
    while(cin >> n){
        memset(vis, 0, sizeof vis);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(!vis[i][j] && a[i][j] == '1'){
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        cout <<"Image number "<<t++<< " contains "<<cnt<< " war eagles.\n";
    }
    return 0;
}