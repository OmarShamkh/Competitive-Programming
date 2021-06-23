    #include <bits/stdc++.h>
    using namespace std;
    typedef vector<int> vi;
    typedef long long ll;
    #define loop(n)          for(int i = 0; i < (n); i++)
    #define lp(x, s, e)      for(int x = (s); x < (e); x++)
    #define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
    const int N = 1e5 , MOD = 1e9+7;
    ll sum(ll n){
        n %= MOD;
        return (n*(n+1)/2) % MOD;
    }
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        ll a,b;
        cin >> a >> b;
        cout << (sum(b-1) * ((b * sum(a) + a) %MOD) )%MOD << endl;
        return 0;
    }