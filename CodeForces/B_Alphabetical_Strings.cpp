#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int fr[26] = {0};
        for(char c : s) fr[c-'a']++;
        bool b = false;
        for(int i=0; i<26; i++){
            if(fr[i] > 1 || fr[0] == 0 || ( i!=0 && fr[i] == 1 && fr[i-1] == 0)){
                cout << "NO\n";
                b = true;
                break;
            }
        }
        if(b) continue;
        int posa = -1;
        for(int i =0 ; i<s.size(); i++) if( s[i] == 'a'){
            posa = i;
            break;
        }
        int l = posa , r = posa + 1;
        int a = 'a';
        
        while(true){
            bool yes= false;
            if(s[l] == a && l>=0 ){
                l--;
                a++;
                yes = true;
            }
            if(s[r] == a && r<s.size()){
                r++;
                a++;
                yes = true;
            }
            if(!yes) break;
        }
        cout << ( l>0 || r<s.size() ? "NO\n" : "YES\n");
    }
    return 0;
}