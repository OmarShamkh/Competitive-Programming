#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 20;
bool digit(char c){ 
    return (c >= '0' && c <= '9');
}
vector<int> adjlist[N];
map<string,int> mp;
int n,m , W[N];
int mem[N][1<<N];
int order[N];
int dp(int idx, int msk){

    if(idx >= n) return 0;
    int &ret = mem[idx][msk];
    if(~ret) return ret;
    for(int i=0; i<n; i++){
        if(((1<<i)& msk) == 0){
            for (auto node : adjlist[i]) {
			    order[node]++;
		    }
        }
    }
    
    ret = 0;
    for(int i=0; i<n; i++){
        if(((1<<i)& msk) == 0){
            if(order[i] == 0){
                ret = max(ret, dp(idx+1 , msk | (1 << i)) + idx*W[i]);
            }
        }
    }
    return ret;
}
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    stringstream st;
    while(t--){
        memset(mem, -1, sizeof mem);
        mp.clear();
        cin >> n >> m;
        string s;
        getline(cin, s);
        for(int i=0; i<n; i++){
            W[i] = 0;
            getline(cin, s);
            st.clear();
            st.str(s);
            string topic = "" , word = "";
            while(st >> word){
                if(digit(word[0]))
                    for(int j=0;j<word.size();j++)
                        W[i] = W[i]*10+word[j]-'0';
                else topic +=word+" ";
            }
        
            mp[topic] = i;
        }

        for(int i=0; i<m; i++){
            getline(cin, s);
            st.clear();
            st.str(s);
            string topic = "" , word = "";
            int from,to;
            while(st >> word){
                if(word[0] == '-') from = mp[topic] , topic.clear();
                else topic +=word+" ";
            }
            to = mp[topic];

            adjlist[from].push_back(to);
        }

        cout << dp(1,0) << "\n";
    }
    
    return 0;
}