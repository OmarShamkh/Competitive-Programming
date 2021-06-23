#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
int M;
int mul(int a, int b){
    a %= M;
    b %= M;
    return (a*b) % M;
}
int fastpower(int a, int b){
    if(b == 0) return 1;
    int x = fastpower(a,b/2);
    if(b & 1){
        return(mul(mul(x,x),a));
    }
    else{
        return (mul(x,x));
    }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int A,B;
    while(cin >> A >> B >> M){
        cout << fastpower(A,B) << "\n";
    }
    
    return 0;
}