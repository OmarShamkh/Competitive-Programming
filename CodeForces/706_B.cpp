#include <bits/stdc++.h>
 
using namespace std;
#define loop(i,a,b) for(int i=a; i<b; i++)
 
void fast()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
long long n,x[100001],q,m;
int main()
{
    fast();
    cin>>n;
    loop(i,0,n) cin>>x[i];
    sort(x,x+n);
    cin>>q;
    long long st=0,en=n-1, mid;
    loop(i,0,q)
    {
        cin>>m;
        st = 0, en = n-1;
 
        while(st<=en)
        {
            mid = (st+en)/2;
            if(x[mid] <= m)
                st=mid+1;
            else
                en = mid-1;
        }
        cout<<en+1<<endl;
    }
    return 0;
}