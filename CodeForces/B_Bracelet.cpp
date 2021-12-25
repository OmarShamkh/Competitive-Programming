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
        int n = s.size();
        if(n == 1 || s[n-1] == '0') cout << s << "\n";
        else{
            //101 201 202 878
            char a = s[n-1];//1
            char b = s[n-2];//0
            // cout << a << " " << b <<"\n";
            if(n == 2 && a == b) cout << s << "\n";
            else if(n <=2 && a > b && a == b+1 && b!= '0'){
                cout << a << "\n";
            }

            else if(b < a ){
                if(n == 2) cout << b << a <<"\n";
                else{
                    if(b == '0'){
                        cout << a <<"1\n"; 
                    }
                    if(b == '1'){
                        cout << a <<"2\n"; 
                    }
                    else cout << a << b-'0' +1 <<"\n"; 
                }
            }
            else if(a < b ){
                if(b == '9'){
                    cout << a;
                    for(int i=1; i<=n-1; i++) cout << '0';
                    cout << "\n";
                }
                else cout << a << b-'0' +1 <<"\n";
            }
        }

    }
   
    return 0;
} 