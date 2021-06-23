#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
int a[21];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int p;
        cin >> p;
        bool f=false;
        for(int i=0; i<p; i++) cin >> a[i];
        for(int msk=0; msk<(1<<p)&&!f; msk++){
            int sum = 0;
            for(int i=0; i<p; i++){
                if(((1<<i)&msk) !=0) sum+=a[i];
            }
            if(sum == n) f = true;
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}