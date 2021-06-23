#include <bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> k;
    for (int i=0; i<k; i++)
    {
        if(n%10) n--;
        else n /= 10;
    }
    
    cout << n;
    return 0;
}