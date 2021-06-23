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
    int n;
    
    while(cin >> n && n)
    {   
        multiset<int>st;
        ll ans = 0;
        while(n--)
        {
        int k;
        cin >> k;
        while(k--)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        multiset<int> ::iterator mi;
        multiset<int> ::iterator ma;
        mi = st.begin();
        ma = --st.end();
        ans += *ma - *mi;
        st.erase(mi);
        st.erase(ma);
        }
        cout << ans << "\n";
    }
    
    return 0;
}