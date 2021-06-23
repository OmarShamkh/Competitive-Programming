#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 2e5+10;
int a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n , cnt1 = 0 , cnt2 = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 1) cnt1++;
        else cnt2++;
    }
    if(cnt2){
        cout << 2 << ' ';
        cnt2--;
    }
    if(cnt1){
        cout << 1 << ' ';
        cnt1--;
    }
    while (cnt2)
    {
        cout << 2 << ' ';
        cnt2--;
    }
    while (cnt1)
    {
        cout << 1 << ' ';
        cnt1--;
    }
    
    return 0;
}