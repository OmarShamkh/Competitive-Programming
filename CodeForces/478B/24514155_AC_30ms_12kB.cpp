#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m ,mini ,maxi;
    cin>>n>>m;
    mini = (n/m -1)*(n/m)/2 *m + (n%m)*(n/m);
    maxi = (n-m+1)*(n-m)/2;
    cout<<mini<<" "<<maxi;
    return 0;
}
