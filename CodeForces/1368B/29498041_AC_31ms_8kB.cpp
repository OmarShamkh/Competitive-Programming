#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll k , a[10];
    cin >> k;
    //multiset <int> st;
    for(int i=0; i<10; i++) a[i] = 1;
    ll cur = 1;
    int i= 0;
    while(cur < k){
        cur /= a[i%10];
        a[i%10]++;
        cur *= a[i%10];
        i++;
    }
    string s = "codeforces";
    for(int i=0; i<10; i++){
        for(int j =1; j<=a[i]; j++){
            cout << s[i];
        }
    }

    return 0;
}