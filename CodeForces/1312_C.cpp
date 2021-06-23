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
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        multiset<ll> st;
        for(int i=1; i<=n; i++){
            ll x; 
            cin >> x;
            if(x) st.insert(x);
        }
        if(st.empty()){
            cout << "YES\n";
            continue;
        } 
        int maxpower = log(*st.rbegin()) / log(k) + 1;
        ll curpower = 1;
        for(int i =1; i<=maxpower; i++) curpower *= k;
        for(int i=maxpower; i>=0 && !st.empty(); i--){
            auto it = st.end();
            it--;
            ll curval = *it;
            st.erase(it);
            if(curval >= curpower){
                curval -= curpower;
            }
            if(curval > 0) st.insert(curval);
            curpower /= k;
        }
        if(st.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}