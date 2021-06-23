	#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 1e5;
int t, r, c, cnt, ans[8];
bool row_vist[8], diagonal1[16], diagonal2[16];
void solve(int col)
{
    if (col == 8)
    {
        printf("%2d      ", cnt++);
		printf("%d", ans[0] + 1);
        //cout<<" "<<cnt++<<"      "<<ans[0]+1<<" ";   
        for (int row = 1; row < 8; row++) printf(" %d", ans[row] + 1);
        puts("");
    }
    if (col == c) solve(col + 1);
    else
    {
        for (int row = 0; row < 8; row++)
        {
            if (row_vist[row] || diagonal1[col - row + 8] || diagonal2[row + col]) continue;
            row_vist[row] = 1;
            diagonal1[col - row + 8] = 1;
            diagonal2[row + col] = 1;
            ans[col] = row;
            solve(col + 1);
            row_vist[row] = false;
            diagonal1[col - row + 8] = false;
            diagonal2[row + col] = false;
        }
    }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> t;
    int f = 0;
    while (t--)
    {
        memset(row_vist, 0, sizeof row_vist);
        memset(diagonal1, 0, sizeof diagonal1);
        memset(diagonal2, 0, sizeof diagonal2);
        cin >> r >> c;
        r--;c--;
        row_vist[r] = 1;
        diagonal1[c - r + 8] = 1;
        diagonal2[c + r] = 1;
        ans[c] = r;
        cnt = 1;
        if (f++) puts("");
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
        solve(0);
    }
    return 0;
}