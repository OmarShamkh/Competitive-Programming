#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
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
        int n,k;
        cin >> n >> k;
        int b1 = n-2 , b2 = n-1;
        int cnt = 1;
        k--;
        while(k > 0){
            if(k < cnt){
                b2 -= k;
                break;
            }
            b1--;
            k -= cnt;
            cnt++;
        }
        for(int i=0; i<n; i++){
            if(i == b1 || i == b2) cout << 'b';
            else cout << 'a';
        }
        cout <<"\n";
    }
    
    return 0;
}