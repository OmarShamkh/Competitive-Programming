#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll cost[26];
    for(int i=0; i<26; i++) cin >> cost[i];
    string s;
    cin >> s;
    ll pre[s.size()];
    for(int i=0; i<s.size(); i++) pre[i] = cost[s[i]-'a']+ (i==0?0:pre[i-1]);

    map<char,vector<int>>mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]].push_back(i);
    }
    ll ans = 0;
    
    for(auto v : mp){
        map<ll,int>fr;
        
        for(auto i : v.second){
            //cout<<"i :"<< i<<" ";
            int r = i-1;
            //cout<<"r :"<<r<<"\n";
            if(i) ans += fr[pre[r]];
            //cout<<"ans :"<<ans<<"\n";
            fr[pre[i]]++;
        }
    }
    cout << ans << "\n";
    return 0;
}