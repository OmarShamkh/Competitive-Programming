#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n) for (int i = 0; i < (n); i++)
#define lp(x, s, e) for (int x = (s); x < (e); x++)
#define lpe(x, s, e) for (int x = (s); x <= (e); x++)
const int N = 1e5;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n, ans = 0;
    string s1, s2;
    cin >> n >> s1 >> s2;
    bool f = true;
    for(int i=0; i<n; i++){
        if(s1[i] != s2[i]){
            if(f){
                ans++;
                f = false;
            }
        }
        else f = true;
    }
    cout << ans << "\n";
    return 0;
}