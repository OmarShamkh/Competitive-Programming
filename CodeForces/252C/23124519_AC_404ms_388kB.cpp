#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,d ,ans= 0 ,r,l;
    cin>>n>>d;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    r =2 , l=0;
    while(r<n)
    {
        while (a[r]-a[l]>d){
            l++;
        }

        ans +=(r-l)*(r-l-1)/2;
        //cout<<ans<<"\n";
        r++;
    }

    cout<<ans;
    return 0;
}