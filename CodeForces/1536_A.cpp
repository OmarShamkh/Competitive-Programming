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
        int n;
        cin >> n;
        vector<int> a(n);
        set<int>st;
        for(int i=0; i<n; i++){
            cin >> a[i];
            st.insert(a[i]);
        }
        //bool b = false;
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<i; j++){
                int dif = abs(a[i]- a[j]);
                if(st.count(dif)) continue;
                a.push_back(dif);
                st.insert(dif);
            }
            if(a.size() > 300) break;
        }   
        if(a.size() > 300) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << a.size() << "\n";
            for(auto i : a) cout << i << " ";
            cout<<"\n";
        }

    }
    

    return 0;
} 