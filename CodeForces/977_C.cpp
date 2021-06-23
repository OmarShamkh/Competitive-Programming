#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 2e5+10;
int n, k,a[N];
int ok(int x){
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(a[i] <= x) cnt++;
    }
    return cnt;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];

    int st = 1 , en = 1e9 , mid;
    while(st < en){
        int mid = st + (en - st) /2;
        if(ok(mid) >= k) en = mid;
        else st = mid+1;
    }
    if(ok(en) == k) cout << en << "\n";
    else cout << -1;
    return 0;
}