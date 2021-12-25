#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
int a[N],b[N],c[N];

int main()
{
    INGZzz
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
        if(a[i]+b[i] <= c[i] || a[i]+c[i] <= b[i] || c[i]+b[i] <= a[i]){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    
    return 0;
}