#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
bool comp(string a, string b){
    return (a.length() < b.length());
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    vector<string>s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    sort(s.begin() , s.end(), comp);
    for(int i=0; i<n-1; i++){
        if(s[i+1].find(s[i]) == string::npos){
            cout <<"NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    for(auto i : s) cout << i << "\n";
    return 0;
}