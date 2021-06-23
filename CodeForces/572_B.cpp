#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5 +10;
int sell[N],buy[N];
vector<int>v;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,s;
    cin >> n >> s;
    
    for(int i=0; i<n; i++){
        char d ;
        int p,q;
        cin >> d >> p >> q;
        if(d == 'S') sell[p] += q;
        else buy[p] += q;
    }
    int cnts =0;
    for(int i=0; i<N; i++){
        if(sell[i]){
            v.push_back(i);
            cnts++;
        }
        if(cnts == s) break;
    }
    sort(v.rbegin(),v.rend());
    for(auto i : v) cout <<"S"<<" "<< i <<" "<<sell[i]<<"\n";
    
    int cntb =0;
    for(int i=N; i>=0; i--){
        if(buy[i]){
            cout <<"B"<<" "<<i<<" "<<buy[i]<<"\n";
            cntb++;
        }
        if(cntb == s) break;
    }
    

    return 0;
}