#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 410;
char grid[N][N];
int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;  
        vector<pair<int,int>> pos;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> grid[i][j];
                if(grid[i][j] == '*') pos.push_back({i,j});
            }
        }
        assert(pos.size() == 2);
        int p1 = pos[0].first , p2 = pos[1].first;
        int p3 = pos[1].second , p4 = pos[0].second;
        
        if(p1 == p2){
            if(p1==0){
                p1++ , p2++;
            }
            else{
                p1-- , p2--;
            }
            // grid[(p1+1) %n][p3] = '*';
            // grid[(p1+1) %n][p4] = '*';
        }
        else if(p3 == p4){
            if(p3==0){
                p3++ , p4++;
            }
            else{
                p3-- , p4--;
            }
            // grid[p1][(p4+1) %n] = '*';
            // grid[p2][(p4+1) %n] = '*';
        }
        else{
            swap(p3,p4);
        }
        grid[p1][p4] = '*' , grid[p2][p3] = '*';
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << grid[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}