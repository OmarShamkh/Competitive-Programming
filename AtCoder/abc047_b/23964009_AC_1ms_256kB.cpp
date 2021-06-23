#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int w,h,n;
    cin>>w>>h>>n;
    int mi_x =0 , mi_y =0 , ma_x =w , ma_y=h;
    while(n--)
    {
        int x,y,a;
        cin>>x>>y>>a;

        if(a==1) mi_x=max(mi_x,x);

        if(a==2) ma_x=min(ma_x,x);

        if(a==3) mi_y=max(mi_y,y);

        if(a==4) ma_y=min(ma_y,y);

    }

    if(ma_x <= mi_x || ma_y <= mi_y) cout<<0;
    else cout<<(ma_x - mi_x)*(ma_y - mi_y);

    return 0;
}


