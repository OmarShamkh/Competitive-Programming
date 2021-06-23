#include <bits/stdc++.h>
using namespace std;
const int N = 8;
char matrx [N][N];
bool check_All_black(){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(matrx[i][j] != 'B') return false;
        }
    }
    return true;
}
int count_black_row(){
    int cnt = 0;
    for(int i=0; i<N; i++){
        bool all_black = true;
        for(int j=0; j<N; j++){
            if(matrx[i][j] != 'B') all_black = false;
        }
        if(all_black) cnt++;
    }
    return cnt;
}
int count_black_col(){
    int cnt = 0;
    for(int i=0; i<N; i++){
        bool all_black = true;
        for(int j=0; j<N; j++){
            if(matrx[j][i] != 'B') all_black = false;
        }
        if(all_black) cnt++;
    }
    return cnt;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> matrx[i][j];
        }
    }
    if(check_All_black()) cout << 8;
    else cout << count_black_row() + count_black_col();
    return 0;
}