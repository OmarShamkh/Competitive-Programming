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
    int n,m;
    double k;
    cin >> n >> m >> k;
    map<string,int> mp;
    while(n--){
        string skill;
        int level;
        cin >> skill >> level;
        if(level * k < 100) continue;
        mp[skill] = (int) level*(k+1e-9);
    }
    while (m--)
    {
        string sk;
        cin >> sk;
        if(!mp.count(sk)) mp[sk] = 0;
    }
    cout << mp.size() << "\n";
    for(auto i : mp){
        cout << i.first << " " << i.second <<"\n";
    }
    
    return 0;
}