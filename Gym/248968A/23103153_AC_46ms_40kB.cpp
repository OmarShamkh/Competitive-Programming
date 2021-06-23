#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, ans =0;
    cin>>n;
    long long arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr, arr +n);


    long long sum = arr[0] + arr [n-1];

    int l = 0, r = n -1;

    while( l < r)
    {
        while(l<r){
            //cout<<r<<"\n";
            if(arr[l]+arr[r]==sum) // 1 2 4 5 5 6 10 10
                ans++;

                r--;
        }
        //cout<<ans<<"\n";
        l++;
        r = n-1;

    }

    cout<<ans;
}
