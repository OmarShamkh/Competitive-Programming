#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
set<double> st;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,x,y ;
    cin >> n >> x >> y;
    while(n--){
        int x1,y1;
        cin >> x1 >> y1;
        double dx = x1-x;
        double dy = y1-y;
        if(dx == 0) st.insert(1e6);
        else st.insert(dy/dx);
    }
    cout << st.size();
    return 0;
}