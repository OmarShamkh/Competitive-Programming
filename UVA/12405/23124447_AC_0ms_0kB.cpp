#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,c=1;
    string s;
    cin>>t;
    while(t--)
    {
        int ans =0;
        cin>>n;
        cin>>s;
        for(int i = 0; i < n;)
        {

            if(s[i] == '.')
            {
                ans++;
                i +=3;
            }
            else i++;
        }
        cout<<"Case "<<c++<<": "<<ans<<"\n";
    }
    return 0;
}