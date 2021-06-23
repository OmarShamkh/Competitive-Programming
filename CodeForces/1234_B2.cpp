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
    int n,k;
    cin >> n >> k;
    deque<int>dq;
    map<int,bool>vis;
    while(n--){
        int x;
        cin >> x;
        if(!vis[x]){
            vis[x] = true;
            if(dq.size() < k){
                dq.push_front(x);
            }
            else{
                int y = dq.back();
                vis[y] = false;
                dq.pop_back();
                dq.push_front(x);
            }
        }
            
    }
    cout << dq.size() <<"\n";
    for(auto i : dq) cout << i << " ";
    return 0;
}