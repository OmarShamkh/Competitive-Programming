#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,a[5]={0};
    cin>>n;
    while(n--) cin>>x , a[x]++;
    cout<<a[4]+a[3]+ (2*a[2]+max(a[1]-a[3],0)+3)/4;
    return 0;
}
