#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef long double ld;

const int N = 1e5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
int a[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        map<int,int> mp;
        for(int i=0; i<n; i++) cin >> a[i] , mp[a[i]] = i;  
        sort(a,a+n);
        int cnt = 1;
        for(int i=1; i<n; i++){
            if(mp[a[i]] != mp[a[i-1]]+1) cnt++;
        }
        cout << (cnt <= k ? "Yes\n" : "No\n");
        
    }
    
    return 0;
}