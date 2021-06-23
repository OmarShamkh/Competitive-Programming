#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 8;
int grid[N][N];
int n,ma =0;
bool vis_col[N*2], dig1[N*3], dig2[N*3];
int solve(int row,int sum){
    if(row == 8){
        ma = max(ma,sum);
        return ma;
    }
    for(int col =0; col<8; col++){

        if(vis_col[col] || dig1[row-col+8] || dig2[row+col])
            continue;
        //pick
        vis_col[col] = true;
        dig1[row-col+8] = true;
        dig2[row+col] = true;
        sum += grid[row][col];
        solve(row+1,sum);

        //leave
        sum -= grid[row][col];
        vis_col[col] = false;
        dig1[row-col+8] = false;
        dig2[row+col] = false;
    }
    return 0;

}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n;
    while(n--){
        ma = 0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++)
                cin >> grid[i][j];
        }
        solve(0,0);
        printf("%5d\n", ma);
    }

    return 0;
}