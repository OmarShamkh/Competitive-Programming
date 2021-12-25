#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5 + 10;

int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x[n] ,ans[n]={0};
        for(int i= 0; i<n; i++) cin >> x[i];
        for(int i=1; i<n; i++){
            int cur = x[i];
            int oper = x[i-1] ^ ans[i-1];
            int next = oper & ~cur;
            ans[i] = next;
        }
        for(auto i : ans) cout << i << " "; cout<<"\n";
    }
    return 0;
}