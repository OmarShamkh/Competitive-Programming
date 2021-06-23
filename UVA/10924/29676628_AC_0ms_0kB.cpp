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
    if (n == 0) return false;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    string s;
    while(cin >> s){
        int sum = 0;
        for(int i=0; i<s.size(); i++){
            sum +=( (s[i] >='a' && s[i] <= 'z') ? s[i]-'a'+1 : s[i]-'A'+27 );
        }
        if(isprime(sum)) cout << "It is a prime word.\n";
        else cout << "It is not a prime word.\n";
    }
    return 0;
}