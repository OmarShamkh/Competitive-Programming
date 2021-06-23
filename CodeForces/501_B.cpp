#include <bits/stdc++.h>
using namespace std;
map<string,string>mp;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        string old , neww;
        cin >> old >> neww;
        bool check = true;
        for(auto i : mp){
            if(i.second == old){
                mp[i.first] = neww;
                check = false;
                break;
            }
        }
            
        if(check) mp[old] = neww;
    }
    cout <<mp.size()<<"\n";
    for(auto i : mp) cout<<i.first<<" "<<i.second<<"\n";
    
    return 0;
}