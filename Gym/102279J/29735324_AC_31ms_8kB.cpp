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
    string x , ans= "";
    cin >> x;
    for(int i=1; i<x.size(); i++){
        for(int j=i+1; j<x.size(); j++){
            string tmp = x;
            swap(tmp[i],tmp[j]);
            if(tmp < x && tmp[0] != '0') ans = max(ans,tmp);
        }
    }
    if(ans == "") cout << -1;
    else cout << ans;
    return 0;
}