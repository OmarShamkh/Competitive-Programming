#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    map<string,string>mp;
    string s1 , s2 , input;
    stringstream s;
    while(getline(cin,input) && input.size()!=0){
        s.clear();
        s << input;
        s >> s1;
        s >> s2;
        mp[s2] = s1;
    }
    while (cin >> s1)
    {
        map<string, string>::iterator it;
        it = mp.find(s1);
        if(it != mp.end()) cout << it->second << endl;
        else cout << "eh" << "\n";
        
    }
    
    return 0;
}