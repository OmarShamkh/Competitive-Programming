#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e4+10;
int a[N];
int main()
{
    INGZzz
    
    int n;
    cin >> n;
    int ma = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        ma = max(ma , a[i]);
    }
    if(ma == a[0]) cout<< 'S';
    else cout << 'N';
    return 0;
}