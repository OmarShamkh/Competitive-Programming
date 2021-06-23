#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> t;
    while(t--){
        int n,x, odd =0 ,even =0;
        cin >> n >> x;
        while(n--){
            int val;
            cin >> val;
            if(val &1) odd++;
            else even++;
        }
        bool check = false;
        for(int i=1; i<=odd; i+=2){
            if(i <= x && x-i <=even) check = true; 
        }
        if(check) cout <<"YES\n";
        else cout <<"NO\n";
    }
    return 0;
}