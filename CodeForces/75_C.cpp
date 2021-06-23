#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
int GCD(int a, int b){
    return (b == 0 ? a : GCD(b , a%b));
}
int LCM(int a, int b){
    return b/GCD(a,b) * a;
}
vector<int> getdivisors(int n){
    vector<int> v;
    for(int i=1; i*i <=n; i++){
        if(n % i == 0){
            v.push_back(i);
            if(i*i != n) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int a,b,n;
    cin >> a >> b >> n;
    int gc = GCD(a,b);
    auto ans = getdivisors(gc);
    cout << endl;
    while(n--){
        int low , hi;
        cin >> low >> hi;
        auto it = upper_bound(ans.begin(), ans.end(), hi);
        if(it != ans.begin()){
            it--;
            if(*it >= low) cout << *it << "\n";
            else cout << -1 << "\n";
        }
        else cout << -1 << "\n";
    }
    return 0;
}