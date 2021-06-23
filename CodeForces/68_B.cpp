#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
double EBS = 1e-7;
int n,k,a[N];
bool ok(double x){
    double have = 0 , need = 0;
    for(int i=0; i<n; i++){
        if(a[i] > x){
            have += (a[i] -x) - ((a[i]-x)*k /100.0);
        }
        else need += (x-a[i]);
    }
    return need <= have;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    double st = 0 , en = 1000,mid;
    while(abs(st - en) > EBS){
        mid = (st+en) /2.0;
        if(ok(mid)) st = mid;
        else en = mid;
    }
    printf("%.9f",st);
    return 0;
}