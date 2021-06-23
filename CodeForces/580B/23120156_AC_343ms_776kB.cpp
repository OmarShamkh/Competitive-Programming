#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,d,m,s,ans=0,maxi=0;
    cin>>n>>d;
    pair<int,int> a[n];
    
    for(int i=0; i<n; i++)
        cin>>a[i].first >>a[i].second;
        
    sort(a,a+n);
    
    int l=0, r=0;
    while(r<n)
    {
        ans+=a[r].second;
        while(a[r].first - a[l].first >=d)
        {
            ans-=a[l].second;
            l++;
        }
        maxi = max(maxi,ans);
        r++;
    }
    cout<<maxi;
    return 0;
}
