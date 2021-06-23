#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 510;
int n,m ,r1,r2,c1,c2;
char a[N][N];

int dx[]={0, 0, 1, -1};
int dy[]={1, -1, 0, 0};

bool dfs(int r, int c){
    if(a[r][c] != '.'){
        if(r == r2 && c == c2) return 1;
        return 0;
    }
    a[r][c] = 'X';
    for(int i=0; i<4; i++){
        if(dfs(r+dx[i] , c+dy[i])) return 1;
    }
    return 0;
}
int main()
{
    INGZzz
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    cin >> r1 >> c1;
    cin >> r2 >> c2;
    a[r1][c1] = '.';
    if(dfs(r1, c1)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}