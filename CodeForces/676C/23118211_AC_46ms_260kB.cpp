#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,ans=0, l =0,r=0,a,b;
    cin>>n>>t;
    string s;
    cin>>s;
    a =0;
    while(r<n)
    {
        if(s[r]=='a')
            a++;
        if(a<=t)
            ans = max(ans, r-l+1);

        while(a>t)
        {
            if(s[l]=='a')
                a--;
            l++;
        }
        r++;
    }
    b =0, l=0,r=0;
    while(r<n)
    {
        if(s[r]=='b')
            b++;
        if(b<=t)
            ans = max(ans, r-l+1);

        while(b>t)
        {
            if(s[l]=='b')
                b--;
            l++;
        }
        r++;
    }
    cout<<ans;
    return 0;
}
