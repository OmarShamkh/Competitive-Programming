#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3;
int n , adj[N][N];
vector<int> sources , sinks;
int main()
{
    INGZzz
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> adj[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        int cnt = 0;
        for(int j=1; j<=n; j++){
            if(adj[i][j]) cnt++;
        }
        if(cnt == 0) sinks.push_back(i);
    }
    for(int i=1; i<=n; i++){
        int cnt = 0;
        for(int j=1; j<=n; j++){
            if(adj[j][i]) cnt++;
        }
        if(cnt == 0) sources.push_back(i);
    }
    cout << sources.size() <<" ";
    for(auto i : sources) cout << i << " ";
    cout << "\n";
    cout << sinks.size() <<" ";
    for(auto i : sinks) cout << i << " ";
    return 0;
}