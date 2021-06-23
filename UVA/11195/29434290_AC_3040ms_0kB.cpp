#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 16;
char grid[N][N];
int n,cnt =0;
bool vis_col[N*2], dig1[N*3], dig2[N*3];
int solve(int row){
    if(row == n){
        return ++cnt;
    }
    for(int col =0; col<n; col++){

        if(grid[row][col] == '*' || vis_col[col] || dig1[row-col+16] || dig2[row+col])
            continue;
        //pick
        vis_col[col] = true;
        dig1[row-col+16] = true;
        dig2[row+col] = true;
        solve(row+1);

        //leave
        vis_col[col] = false;
        dig1[row-col+16] = false;
        dig2[row+col] = false;
    }

    return 0;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int tc = 1;
    while(cin >> n && n){
        cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cin >> grid[i][j];
        }
        solve(0);
        cout<< "Case "<< tc++ << ": "<<  cnt <<"\n";
    }

    return 0;
}