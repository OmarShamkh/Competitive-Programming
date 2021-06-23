#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n,k,ll=0,rr=0,cnt=0,ans=0;
    cin>>n>>k;
    int a[n];
    set<int>s;
    map<int,int>mp;
    for(int i=0; i<n; i++) cin>>a[i];
    int l=0 , r=0;
    while(r<n){ // 6 5 1 2 3 2 1 4 5
        mp[a[r]]++;
        if(mp[a[r]]==1) cnt++;
        if(cnt <=k && (r-l+1)> ans){
            ans = r-l+1; //
            ll=l;
            rr=r;
        }
        while(cnt > k){
            mp[a[l]]--;
            if(mp[a[l]]==0) cnt--;
            l++;
        }
        r++;
    }

    cout<<ll+1<<" "<<rr+1;
    return 0;
}
