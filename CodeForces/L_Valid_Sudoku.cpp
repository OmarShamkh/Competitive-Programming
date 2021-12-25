#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 10;
int a[N][N];
int main()
{
    INGZzz
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<9; i++){
        int sum = 0;
        for(int j=0; j<9; j++){
            sum += a[i][j];
        }
        if(sum != 45 ) return cout << "INVALID\n" , 0;
    }
    for(int i=0; i<9; i++){
        int sum = 0;
        for(int j=0; j<9; j++){
            sum +=(a[j][i]);
        }
        if(sum != 45 ) return cout << "INVALID\n" , 0;
    }
    cout << "VALID\n";
    return 0;
}