#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e3;
int a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    int mx = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        mx = max(mx,a[i]);
    }
    
    for(int i=0; i<m; i++){
        int idx = -1;
        for(int j=0; j<n; j++){
            int mi = *min_element(a,a+n);
            if(a[j] == mi) idx = j;
        }
        a[idx]++;
    }
    int mi = *max_element(a,a+n);
    cout << mi << " " << mx+m;
    return 0;
}