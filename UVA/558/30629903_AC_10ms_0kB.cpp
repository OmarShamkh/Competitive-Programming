#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e4;
int n,m ,cost[N];
vector<pair<pair<int,int>,int>> edges;

void bellman(int source){
    for(int i=0; i<n; i++) cost[i] = 1e9;
    cost[source] = 0;
    for(int i=1; i<n; i++){
        for(auto edge : edges){
            int a = edge.first.first;
            int b = edge.first.second;
            int c = edge.second;
            if(cost[a] + c < cost[b]){
                cost[b] = cost[a] + c;
            }
        }
    }
    bool neg_cycle = false;
    for(auto edge : edges){
        int a = edge.first.first;
        int b = edge.first.second;
        int c = edge.second;
        if(cost[a] + c < cost[b]){
            neg_cycle = true;
        }
    }
    if(neg_cycle) cout << "possible\n";
    else cout << "not possible\n";
}
int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        edges.clear();
        for(int i=1; i<=m; i++){
            int x,y,w;
            cin >> x >> y >> w;
            edges.push_back({{x,y} , w});
        }
        bellman(0);
    }
    
    return 0;
}