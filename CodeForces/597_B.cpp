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
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++) cin >> v[i].second >> v[i].first;
    sort(v.begin(),v.end());
    //for(auto i : v) cout << i.first << " " << i.second << "\n";
    int cnt = 1 , prev = v[0].first;
    for(int i=1; i<n; i++){
        if(v[i].second > prev){
            cnt++;
            prev = v[i].first;
        }
    }
    cout << cnt;
    return 0;
}