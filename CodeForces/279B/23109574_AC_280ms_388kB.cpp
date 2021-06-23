#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,ans=0,sum=0 , l =0,r=0;
    cin>>n>>t;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i]; // 1 1 2 3
    while(l<n)
    {

        while(r<n && sum+a[r] <=t)
        {
            sum+=a[r];
            r++;
        }
        ans=max(ans,r-l);
        sum -=a[l];
        l++;
    }
    cout<<ans;
    return 0;
}
