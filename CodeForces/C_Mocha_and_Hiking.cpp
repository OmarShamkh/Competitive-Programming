#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define len(s)   (int)s.length()
#define sz(v)    (int)v.size()
#define all(a)   a.begin(),a.end()
const int N = 1e4+10, OO = 0x3f3f3f3f, mod = 1e9 + 7;
vector<int> adjlist[N];
int vis[N];
void dfs(int node){
    vis[node] = true;
    cout << node << " ";
    for(auto ch : adjlist[node]){
        if(!vis[ch]) dfs(ch);
    }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1; i<=n; i++){
            int x; cin >> x;
            if(x) adjlist[n+1].push_back(i);
            else adjlist[i].push_back(n+1);
        }
        dfs(1);
    }
    
    return 0;
}