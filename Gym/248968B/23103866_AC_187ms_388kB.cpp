#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans =0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr, arr +n);

    int sum = arr[0] + arr [n-1];

    int l = 0, r = n -1;

    while( l < r)
    {
        if( arr[l] + arr[r] < sum)
        {

            l++;
            continue;
        }

        if(arr[l] + arr[r] > sum)
        {
            r--;
            continue;
        }

        if(arr[l] + arr[r] == sum)
        {
            ans++;
            r--;
        }

    }

    cout<<ans;
    return 0;
}
