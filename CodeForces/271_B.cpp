#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 5e3+10 , M = 1e6;
int a[N][N];
bool isprime[M];
vector<int>primes;
void seive()
{
    memset(isprime, true, sizeof isprime);
    isprime[0] = isprime[1] = false;
    for (ll i = 2; i <M; i++)
    {
        if (isprime[i]){
            primes.push_back(i);
            for (ll j = i*i; j <M; j += i) isprime[j] = false;
        }
    }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    seive();
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int ans = 1e9;
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<m; j++){
            auto it = lower_bound(primes.begin(),primes.end(), a[i][j]);
            cnt += (*it - a[i][j]);
        }
        ans = min(ans , cnt);
    }
    for(int i=0; i<m; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            auto it = lower_bound(primes.begin(),primes.end(), a[j][i]);
            cnt += (*it - a[j][i]);
        }
        ans = min(ans , cnt);
    }
    cout << ans << "\n";
    return 0;
}