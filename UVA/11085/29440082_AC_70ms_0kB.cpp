#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 9;
int a[N] , newpostion[N];
int mi=1e9;
bool vis_row[N*2], dig1[N*3], dig2[N*3];
int solve(int col){
    if(col == 8){
        int move = 0;
        for(int i=0; i<8; i++){
            if(a[i] != newpostion[i])  move++;
        }
        mi = min(mi,move);  
        return mi;
    }
    for(int row =0; row<8; row++){

        if( vis_row[row] || dig1[col-row+8] || dig2[row+col])
            continue;
        //pick
        newpostion[col] = row; // new valid position
        vis_row[row] = true;
        dig1[col-row+8] = true;
        dig2[row+col] = true;
        solve(col+1);

        //leave
        vis_row[row] = false;
        dig1[col-row+8] = false;
        dig2[row+col] = false;
    }
    return 0;

}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int tc = 1 , n =2;
    while (scanf("%d %d %d %d %d %d %d %d", &a[0], &a[1],
			&a[2], &a[3], &a[4], &a[5], &a[6],
			&a[7]) != EOF) {
        mi = 1e9;
        for(int i=0; i<8; i++)  newpostion[i] = 0;
        for(int i=0; i<8; i++){
            a[i]--;
        }
        solve(0);
        cout << "Case " << tc++ << ": " << mi << "\n";
    }
    return 0;
}