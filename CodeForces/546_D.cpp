#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 5e6+5 , M = 5e6;
int t, SPF[N],pre[N];
int getprimes(int n){
    int ans = 0;
    while (SPF[n] != 1)
    {
        ans++;
        n /= SPF[n];
    }
    return ans;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    for(int i=1; i<=M; i++) SPF[i] = i;
    SPF[2] = 2;
    for(int i = 4; i<=M; i+=2) SPF[i] = 2;
    for(int i=3; i*i <=M; i+=2){
        if(SPF[i] !=i ) continue;
        for(ll j=i*i*1LL; j<=M; j+=i){
            if(SPF[j] == j) SPF[j] = i;
        }
    }
    for(int i=1; i<=M; i++){
        pre[i] = getprimes(i);
        pre[i] += pre[i-1]; 
    }
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << pre[a] - pre[b] << "\n";  
    }
    return 0;
}