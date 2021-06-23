#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 1e4;
bool isprime[N];
vector<int> primes;
void seive()
{
    memset(isprime, true, sizeof isprime);
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <N; i++)
    {
        if (isprime[i]){
            primes.push_back(i);
            for (int j = i*i; j <N; j += i) isprime[j] = false;
        }
    }
}
int getfactors(int x){
    int cnt = 0;
    for(int i=0; i<=x; i++){
        if(x % primes[i] == 0){
            x /= primes[i];
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    seive();
    int n , cnt = 0;
    cin >> n;
    //for(auto i : primes) cout << i << "\n";
    for(int i=1; i<=n; i++) cnt += (getfactors(i) == 2);
    cout << cnt << "\n";
    return 0;
}