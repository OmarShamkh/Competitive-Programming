#include <bits/stdc++.h>
using namespace std;
const int N = 101;
int n , a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    int even = 0 , odd = 0;
    for(int i =1; i<=3; i++){
        odd += (a[i]%2 == 1) ;
        even +=( a[i]%2 ==0);
    }
    if(even <=1){
        for(int i=1; i<=n; i++){
            if(a[i]%2==0) cout << i;
        }
    }
    else{
        for(int i=1; i<=n; i++){
            if(a[i]%2==1) cout << i;
        }
    }
    return 0;
}