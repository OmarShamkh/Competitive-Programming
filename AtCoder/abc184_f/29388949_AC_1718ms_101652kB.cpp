#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
int a[50];
set<int>possib1,possib2;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,t;
    cin >> n >> t;
    for(int i=0; i<n; i++) cin >> a[i];
    int l = n/2, r = n-l;
    for(int i=0; i<(1<<l); i++){
        ll sum = 0;
        for(int j=0; j<l; j++){
            if(i & (1<<j)){
                sum += a[j];
            }
            if(sum > t) break;
        }
        if(sum <= t) possib1.insert(sum);
    }
    for(int i=0; i<(1<<r); i++){
        ll sum = 0;
        for(int j=0; j<r; j++){
            if(i & (1<<j)){
                sum +=a[l+j];
            }
            if(sum > t) break;
        }
        if(sum <= t) possib2.insert(sum);
    }
    int ans = 0;
    for(auto i : possib1){
        auto  idx = possib2.lower_bound(t-i+1);
        if(idx != possib2.begin()) idx--;
        if(i+ *idx <=t) ans = max(ans,i+ *idx);
        if(ans == t) break;
    }
    cout << ans << "\n" ;

    return 0;
}