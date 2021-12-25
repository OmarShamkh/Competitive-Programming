#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    int t = 1;
    while(t--){
        string a,b;
        cin >> a >> b;
        if(a.length() != b.length()){
            cout << "NO\n";
            return 0;
        }
        if(a == b){
            cout << "YES\n";
            return 0;
        }
        bool cnta = 0;
        bool cntb = 0;
        for(int i=0; i<a.length(); i++){
            if(a[i] == '1') cnta = 1;
        }
        for(int i=0; i<b.length(); i++){
            if(b[i] == '1') cntb = 1;
        }
        if(cnta == cntb) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}