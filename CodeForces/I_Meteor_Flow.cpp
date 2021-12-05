#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;


int main()
{
    INGZzz
    
    int t = 1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        priority_queue<int>pq;
        int damage = 0, ans = 0;
        for(int i=0; i<n; i++){
            int t,d;
            cin >> t >> d; 
            pq.push(d);
            damage += d;
            if(damage > t){
                ans++;
                damage -= pq.top();
                pq.pop();
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}