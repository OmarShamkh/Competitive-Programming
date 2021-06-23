#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e3+10;
int n,m;
int x[N][N] , y[N] , a[N][N] , b[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int color , siz;
        cin >> color >> siz;
        x[siz][color]++;
        y[siz]++;
    }
    for(int i=0; i<m; i++){
        int color , siz;
        cin >> color >> siz;
        a[siz][color]++;
        b[siz]++;
    }
    int mark = 0 , beauty = 0;
    for(int i=1; i<=1000; i++){
        mark += min(y[i],b[i]);  
        for(int j=1; j<=1000; j++)
            beauty += min(x[i][j],a[i][j]);
    }
    
    cout << mark << ' ' << beauty;
    return 0;
}