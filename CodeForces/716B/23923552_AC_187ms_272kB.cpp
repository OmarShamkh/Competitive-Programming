#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    string s,ans="";
    cin>>s;
    if(s.size() < 26)
    {
        cout<<-1;
        return 0;
    }
    map<char,int>mp;
    int l=0, r=25;
    again:
    while(r<s.size())
    {
        for(int i=l; i<=r; i++)
            mp[s[i]]++;
        for(char x='A'; x<='Z'; x++)
        {
            if(mp[x] ==0)
                ans+=x;
        }
        if(ans.size() > mp['?'])
        {
            l++,r++;
            ans="";
            mp.clear();
            goto again;
        }
        else
        {
            for(int i=l; i<=r; i++)
            {
                if(s[i]=='?')
                {
                    s[i] = ans[0];
                    ans.erase(0,1);
                }
            }
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='?')
                    s[i]='A';
            }
            cout<<s;
            return 0;
        }
    }
    cout<<-1;
}
