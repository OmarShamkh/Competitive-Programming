#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
bool isprime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    if(isprime(n)){
        cout << 1 << "\n" << n;
        return 0;
    }
    n-= 3;
    cout << 3 <<"\n" << 3 << " ";
    for(int i=3;;i+=2){
        if(isprime(i) && isprime(n-i)){
            cout << i << " " <<  n-i;
            return 0;
        }    
    }
    return 0;
}