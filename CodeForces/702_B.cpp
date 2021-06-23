#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    int a[n];
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    for(int i=0; i<n; i++){
        mp[a[i]]--;
        for(int j=0; j<31; j++){
            int x = (1<<j);//power2
            ans +=mp[x-a[i]];
        }
    }
    cout << ans;
    return 0;
}