#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
int k;
string x;
int mem[10][100][3][100];
int solve(int numOfdigits , int sum_digits, int flag, int m){
    if(numOfdigits == x.size()){
        if(sum_digits == 0 && m == 0){
            return (flag <=1);
        }
        return 0;
    }
    int &ret = mem[numOfdigits][sum_digits][flag][m];
    if(~ret) return ret;
    ret = 0;
    for(int i=(numOfdigits == 0); i<10; i++){
        if(flag){
            ret += solve(numOfdigits+1 , (sum_digits + i)%k, flag, (m*10 +i)%k);
        }
        else{
            if(char(i+'0') < x[numOfdigits]){
                ret += solve(numOfdigits+1 , (sum_digits + i)%k, 1, (m*10 +i)%k);
            }
            else if(char(i+'0') > x[numOfdigits]){
                ret += solve(numOfdigits+1 , (sum_digits + i)%k, 2, (m*10 +i)%k);
            }
            else{
                ret += solve(numOfdigits+1 , (sum_digits + i)%k, 0, (m*10 +i)%k);
            }
        }
    }
    ret += (sum_digits == 0 && m == 0);
    return ret;

}
int main()
{
    INGZzz
    int t;
    cin >> t;
    for(int tc =1; tc<=t; tc++){
        cout << "Case " << tc <<": ";
        int a,b;
        cin >> a >> b >> k;
        if(k > 100){
            cout << 0 << "\n";
            continue;
        }
        memset(mem, -1, sizeof mem);
        x = to_string(b);
        int r = solve(0,0,0,0);
        memset(mem, -1, sizeof mem);
        x = to_string(a-1);
        int l = solve(0,0,0,0);
        cout << r-l << "\n";
    }
    return 0;
}