#include <bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,cnt=0;
    cin >> n;
    float nn = n;
    float sum = 0;
    for(int i=0; i<n; i++) cin >> a[i], sum+=a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(sum/nn <4.5f){
            cnt++;
            sum -=a[i];
            sum +=5;
        }
    }
    cout << cnt;
    return 0;
}