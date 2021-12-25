#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    int m;
    cin >> m;
    for(int i=1; i<=m; i++){
        if(i == 1){
            cout << '*';
            for(int j=1; j<=m-2; j++) cout << ' ';
            cout << "* ";
            for(int k=1; k<=m; k++) cout << '*';
            cout << "\n";
        }
        else if(i>1 && i<m){
            cout << '*';
            for(int j=1; j<=m-2; j++) cout << ' ';
            cout << "* ";
            cout << '*';
            for(int j=1; j<=m-2; j++) cout << ' ';
            cout << "*\n";
        }
        else{
            for(int k=1; k<=m; k++) cout << '*';
            cout << " *";
            for(int j=1; j<=m-2; j++) cout << ' ';
            cout << '*';
        }
    }
    
    return 0;
}