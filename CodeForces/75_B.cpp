#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    string me;
    int n;
    cin >> me >> n;
    map<string,int>mp;
    vector<pair<int,string>>v;
    while(n--){
        string x , y, action,ch;
        int factor = 0;
        cin >> x >> action;
        if(action =="posted"){
            cin >> ch;
            factor = 15;
        }
        else if(action == "commented"){
            cin >> ch;
            factor = 10;
        }
        else{
            factor = 5;
        }
        cin >> y;
        y.erase(y.size()-2);
        cin >> ch;
        if(x != me && y != me) factor = 0;

        mp[x] += factor;
        mp[y] += factor;
    }
    for(auto i : mp){
        if( i.first == me) continue;
        v.push_back({-i.second,i.first});
    }
    //for(auto i : v) cout << i.first << ":" << i.second <<"\n";
    
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i].second << "\n";
    }
    return 0;
}