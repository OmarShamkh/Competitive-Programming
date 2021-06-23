#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, ans = 0, x,y,z, cnt,cnt1, cnt2 ;
    cin>>n;
    long long arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr +n);

    long long sum = arr[0] + arr [n-1];

    int l = 0, r = n -1;

    while( l < r)
    {
        if( arr[l] + arr[r] < sum)
        {
            l++;
        }
        else if(arr[l] + arr[r] > sum)
        {
            r--;
        }
        else
        {
            if(arr[l] == arr[r])
            {
                z = arr[l];
                cnt = 0;
                while(arr[l] ==  z)
                {
                    cnt++;
                    l++;
                }
                ans += cnt*(cnt-1) /2;
            }
            else
            {
                x = arr[l], y = arr[r], cnt1 = cnt2 = 0;
                while(l<=r && arr[l] == x) // 1 2 4 5 5 6 10 10
                {
                    cnt1++;
                    l++;
                }

                while(r>=l && arr[r] == y)
                {

                    cnt2++;
                    r--;
                }

                ans += cnt1 * cnt2 ;
            }

        }

    }

    cout<<ans;
    return 0;
}
