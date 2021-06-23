#include <bits/stdc++.h>
using namespace std;

int t, pre[200010],fr[28];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> t;
    while(t--){
        int n,m;
        string s;
        cin >> n >> m >> s;
        memset(pre,0,sizeof pre);
        memset(fr,0,sizeof fr);
        s = '#' + s ;
        for(int i=0; i<m; i++){
            int p;
            cin >> p;
            pre[p]++;
        }
        for(int i=n-1; i>=0; i--){
            pre[i-1] += pre[i];
        }
        //for(int i=1; i<=n; i++) cout << pre[i] << " ";
        //cout <<"\n";
        for(int i=1; i<=n; i++){
            pre[i]++;
            fr[s[i]-'a']+=pre[i];
        }
        //for(int i=1; i<=n; i++) cout << pre[i] << " ";
        //cout <<"\n";
        for(int i=0; i<26; i++) cout << fr[i] << " ";
        cout <<"\n";
        
    }
    return 0;
}