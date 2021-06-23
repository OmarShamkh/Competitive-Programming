#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 1e3+10;
bool isprime[N];
vector<int> primes;
void seive()
{
    memset(isprime, true, sizeof isprime);
    isprime[0] = isprime[1] = false;
    for (ll i = 2; i < N; i++)
    {
        if (isprime[i])
        {
            primes.push_back(i);
            for (ll j = i * i; j < N; j += i)
                isprime[j] = false;
        }
    }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    seive();
    int n, k , ans = 0;
    cin >> n >> k;
    for(int i=0; i<primes.size()-1; i++){
        int x = 1 +primes[i] +primes[i+1];
        if(isprime[x] && x <= n) ans++;
    }
    cout <<(ans >= k ? "YES\n" : "NO\n");
    return 0;
}