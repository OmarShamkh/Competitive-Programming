#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3+10;
int a[N];
int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int fr[100] = {0};
        for(int i=0; i<n; i++){
            cin >> a[i];
            fr[a[i]]++;
        }
        for(int i=0; i<n; i++){
            if(a[i] != a[i+1]){
                if(fr[a[i]] < fr[a[i+1]]) cout << i+1 <<"\n";
                else cout << i+2 << "\n";
                break;
            }
            if(i == n-1){
                if(a[i] != a[i-1]){
                    if(fr[a[i]] < fr[a[i-1]]) cout << i+1 <<"\n";
                    else cout << i << "\n";
                    break;
                }
            }
            
        }
    }
    return 0;
}