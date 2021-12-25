#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    int n;
    cin >> n;
    string ans = "";
    while(n){
        if(n&1){
            ans = 'A'+ans;
            n--;
            n/=2;
        }
        else{
            ans = 'B'+ans; 
            n-=2;
            n/=2;
        }
    }
    cout << ans << "\n";
        
    return 0;
}