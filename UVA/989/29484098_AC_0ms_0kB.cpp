#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 10;
int n , nn, grid[N][N]; 
bool row[N][N] ,col[N][N], box[N][N][N];
bool valid = false;
void solve(int r, int c){
    if(c == nn){
        c = 0;
        r = r+1;
    }
    if(r == nn){
        valid = true;
        for(int i=0; i<nn; i++){
            for(int j=0; j<nn; j++){
                
                cout << grid[i][j];
                if(j!= nn-1) cout << " ";
            }
            cout << "\n";
        }
        return;
    }
    if(grid[r][c] !=0){
        solve(r,c+1);
        return;
    }
    for(int x= 1; x<=nn; x++){
        if(row[r][x] || col[c][x] || box[r/n][c/n][x]) continue;

        grid[r][c] = x;
        row[r][x] = col[c][x] = box[r/n][c/n][x] = true;

        solve(r,c+1);
        if(valid) return; // return first answer

        grid[r][c] = 0;
        row[r][x] = col[c][x] = box[r/n][c/n][x] = false;
    }

}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int cnt = 0 ;
    while(cin >> n){
        memset(row,0,sizeof row);
        memset(col,0,sizeof col);
        memset(box,0,sizeof box);
        valid = false;
        nn = n*n;
        for(int i=0; i<nn; i++){
            for(int j=0; j<nn; j++){
                cin >> grid[i][j];
                row[i][grid[i][j]] = true;
                col[j][grid[i][j]] = true;
                box[i/n][j/n][grid[i][j]] = true;
            }
        }
        if(cnt++) cout<<"\n";
        //cout<<endl;
        solve(0,0);
        if(!valid) cout << "NO SOLUTION\n";
    }

    return 0;
}