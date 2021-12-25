#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    int n,k;
    cin >> n >> k;
    vector<int> both , A, B;
    for(int i=0; i<n; i++){
        int t,a,b;
        cin >> t >> a >> b;
        if(a && b) both.push_back(t);
        else if(a) A.push_back(t);
        else if(b) B.push_back(t);
    }
    sort(both.begin(),both.end());
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    if(both.size()+A.size() < k || both.size()+B.size() < k) {
        cout << "-1\n";
        return 0;
    }
    int mi = min(A.size(),B.size());
    for(int i=0; i<mi; i++) both.push_back(A[i]+B[i]);
    sort(both.begin(),both.end());
    ll ans = 0;
    for(int i=0; i<k; i++) ans += both[i];
    cout << ans << "\n";
    
    return 0;
}
