#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
struct DSU
{
    vector<int> parent , sz;
    set<int> roots;
    DSU(int n){
        parent = vector<int>(n+1);
        sz = vector<int>(n+1);
        for(int i=1; i<=n; i++){
            parent[i] = i , sz[i] = 1;
            roots.insert(i);
        }
    }
    int find(int x){
        if(x == parent[x]) return x;
        return parent[x] = find(parent[x]);
    }

    bool connect(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y) return false;
        if(sz[x] < sz[y]) swap(x,y);
        parent[y] = x;
        sz[x] += sz[y];
        roots.erase(y);
        return true;
    }
};

int main()
{
    INGZzz
    int n,m; 
    cin >> n >> m;
    DSU dsu(n);
    for(int i=0; i<m; i++){
        int k;
        cin >> k;
        vector<int> comp(k);
        for(int j=0; j<k; j++){
            cin >> comp[j];
        }
        for(int j=0; j<k-1; j++){
            dsu.connect(comp[j] , comp[j+1]);
        }
    }
    for(int i=1; i<=n; i++) cout << dsu.sz[dsu.find(i)] << " ";
    return 0;
}