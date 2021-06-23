#include <bits/stdc++.h>
using namespace std;
const int N = 65;

char grid[N][N];
int row[N], col[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int cnt_A = 0;
        for (int i = 0; i < l; i++)
            row[i] = 0;
        for (int i = 0; i < r; i++)
            col[i] = 0;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < r; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'A')
                {
                    row[i]++, col[j]++, cnt_A++;
                }
            }
        }
        //corner cell
        bool corner = false, rc = false;
        if (grid[0][0] == 'A' || grid[l - 1][0] == 'A' || grid[0][r - 1] == 'A' || grid[l - 1][r - 1] == 'A')
        {
            corner = true;
        }
        // row or col
        for (int i = 0; i < l; i++)
            if (row[i] == r)
                rc = true;
        for (int i = 0; i < r; i++)
            if (col[i] == l)
                rc = true;

        //All P
        if (cnt_A == 0)
            cout << "MORTAL\n";
        //All A
        else if (cnt_A == l * r)
            cout << "0\n";
        //edge row or edge col
        else if (row[0] == r || row[l - 1] == r || col[0] == l || col[r - 1] == l)
            cout << "1\n";
        //corner or row or col
        else if (corner || rc)
            cout << "2\n";
        //edge cell
        else if (row[0] || row[l - 1] || col[0] || col[r - 1])
            cout << "3\n";
        //otherwise
        else
            cout << "4\n";
    }
    return 0;
}