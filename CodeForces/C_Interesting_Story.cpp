#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
            
    int t;
    cin >> t;
    while(t--){
        int n , ans = 0;
        cin >> n;
        vector<string> s(n);
        for(auto &it : s) cin >> it;
        for(char c ='a'; c<='e'; c++){
            vector<int> fr;
            for(auto i: s){
                int cnt = 0;
                for(auto ch : i){
                    if(ch == c) cnt++;
                    else cnt--;
                }
                fr.push_back(cnt);
            }
            sort(fr.rbegin(), fr.rend());
            int sum = 0 , res = 0;
            for(auto i : fr){
                if(sum+i > 0){
                    sum += i;
                    res++;
                }
            }
            ans = max(ans ,res);
        }
        cout << ans << "\n";
        
    }
    
    return 0;
}