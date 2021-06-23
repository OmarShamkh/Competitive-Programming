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
    cin >> n;
    if(n%2 == 0){
        cout << -1;
        return 0;
    }
    for(int i=0; i<n; i++) cout << i << " ";
    cout << "\n";
    for(int i=0; i<n; i++) cout << i << " ";
    cout << "\n";
    for(int i=0; i<n; i++) cout << (2*i)%n << " ";
    
    return 0;
}