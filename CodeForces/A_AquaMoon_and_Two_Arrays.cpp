#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 105;
int a[N] , b[N];

int main()
{
    INGZzz
    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=n; i++) cin >> b[i];
        vector<int> vi , vj;
        for(int i=1; i<=n; i++){
            if(a[i] > b[i]){
                for(int j=1; j<=(a[i] - b[i]); j++) vi.push_back(i);
            }
            if(a[i] < b[i]){
                for(int j=1; j<=(b[i] - a[i]); j++) vj.push_back(i);
            }
        }

    }
    
    return 0;
}