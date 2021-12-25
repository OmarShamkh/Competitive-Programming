#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+5;

int main()
{
    INGZzz
            
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        vector<int> v[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            v[--a[i]].push_back(i);
        }
        
        vector<int> res;
        for(int i=0; i<n; i++){
            for(int j=0; j<min(k, int (v[i].size())); j++){
                res.push_back(v[i][j]);
            }
        }
        vector<int>ans(n,0);
        for(int i=0; i<k* (res.size()/k); i++){
            ans[res[i]] = (i%k) + 1;
        }
        for(auto i : ans) cout << i << " "; cout <<"\n";
    }
    
    return 0;
}