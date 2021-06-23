#include <bits/stdc++.h>
using namespace std;
int n, x;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if(s[1]== '+') x++;
        else x--;
    }
    cout << x << "\n";

    return 0;
}