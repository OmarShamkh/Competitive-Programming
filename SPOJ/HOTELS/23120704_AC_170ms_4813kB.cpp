#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,sum=0,ans=0;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int l=0,r=0;
    while(l<n)
    {
        while(r<n && sum+a[r] <=m)
        {
            sum+=a[r];
            r++;
        }
        ans =max(ans,sum);
        sum-=a[l];
        l++;
    }
    cout<<ans;
    return 0;
}
