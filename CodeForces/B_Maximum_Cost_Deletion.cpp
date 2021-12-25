#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        char tmp = 'x';
        int one = 0 , zero = 0;
        for(int i=0; i<n; i++){
            if(s[i] == tmp) continue;
            tmp = s[i];
            if(s[i] == '0') zero++;
            else one++;
        }
        int mi = min(one+1, zero+1);
        cout << n*a + max( n*b , mi*b) << "\n";
    }
    return 0;
}