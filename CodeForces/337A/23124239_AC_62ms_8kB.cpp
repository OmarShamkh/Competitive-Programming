#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[50];
    int ans = 1000;
    for(int i=0; i<m; i++)
        cin>>a[i];

    sort(a,a+m);

    for(int i=0; i+n-1<m; i++){
        ans=min(ans,a[i+n-1]-a[i]);
        //cout<<ans<<endl;
    }

    cout<<ans;
    return 0;
}