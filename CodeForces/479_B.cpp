#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e2+10;
int n,k,m, a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> k;
    vector< pair<int,int> >v;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<k; i++){
        int ma = max_element(a,a+n) -a;
        int mi = min_element(a,a+n) -a;
        //cout << ma << " " << mi << "\n";
        int dif = a[ma] - a[mi];
        if(dif <= 1) break;
        v.push_back({ma+1,mi+1});
        a[ma]--;
        a[mi]++;
    }
    m = *max_element(a, a+n) - *min_element(a, a+n);
    cout << m << ' ' << v.size() << "\n";
    for(auto i : v) cout << i.first << ' ' << i.second << "\n";
    return 0;
}