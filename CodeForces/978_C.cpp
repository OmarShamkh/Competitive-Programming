#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll n,m;
    cin >> n >> m;
    ll a[n],pre[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) pre[i] = a[i]+(i==0 ? 0 : pre[i-1]);
    for(int i=0; i<m; i++){
        ll x;
        cin >> x;
        int idx = lower_bound(pre,pre+n,x)-pre;
        cout << idx+1 <<" " << x-( (idx == 0 ? 0 : pre[idx-1]))<<"\n";
    }
    return 0;
}