#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,ma=0;
    cin>>n;
    int fr[100005] ={0};

    for(int i=0; i<n; i++){
        cin>>x;
        fr[x]++;
        ma=max(ma,fr[x]);
    }
    cout<<n-ma;
    return 0;
}
