#include <bits/stdc++.h>
using namespace std;
int a, b;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    map<int,int>mp;
    mp[0] = mp[6] = mp[9] = 6;
    mp[1] = 2;
    mp[2] = mp[3] = mp[5] = 5;
    mp[4] = 4;
    mp[7] = 3;
    mp[8] = 7;
    cin >> a >> b;
    int ans = 0;
    for(int i=a; i<=b; i++){
        int x = i;
        while(x > 0){
            ans += mp[x%10];
            x /=10;
        }
    }
    cout << ans;
    return 0;
}