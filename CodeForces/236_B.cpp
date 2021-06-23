#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e7;
int d[N];
int getdivisors(int n){
    int cnt = 0;
    for(int i=1; i*i<=n; i++){
        if(i* i == n) cnt++;
        else if(n % i == 0) cnt+=2;
    }
    return cnt;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int a,b,c;
    cin >> a >> b >> c;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){
                d[i*j*k]++;
            }
        }
    }
    int ans = 0;
    for(int i=1; i<N; i++){
        if(d[i]){
            ans += (d[i] * getdivisors(i)) % 1073741824;
        }
    }
    cout << ans%1073741824 << "\n";
    return 0;
}