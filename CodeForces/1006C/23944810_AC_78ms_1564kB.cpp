#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    long long n , ans =0 , sum1 =0 , sum2 =0;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++) cin>>a[i]; 
    int l=0, r =n-1;
    while(l<=r){
        if(sum1<= sum2){
            sum1 +=a[l];
            l++;
        }
        else{
            sum2+=a[r];
            r--;
        }
        if(sum1 == sum2) ans=sum1;
    }
    cout<<ans;
    return 0;
}
