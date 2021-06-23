#include <bits/stdc++.h>
using namespace std;
void solve(int h,int m){
    while (true)
    {
        m++;
        h += m /60;
        h %= 24;
        m %= 60;
        //cout <<"h :" << h << " m : " << m << "\n";
        if(h%10 == m/10 && h/10 == m%10) break;
    }
    cout << h/10 << h%10 << ":" << m/10 << m%10;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int h,m; 
    char c;
    cin >> h >> c >> m;
    solve(h,m);
}