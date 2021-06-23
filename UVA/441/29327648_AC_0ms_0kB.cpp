#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(i,n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 1e5;
int ar[13];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int k,flag=1;
    while(cin >> k,k){
        if(!flag) cout<<"\n";
        flag = 0;
        for(int i=0; i<k; i++) cin >> ar[i];
        for (int a = 0; a < k - 5; a++)
			for (int b = a + 1; b < k - 4; b++)
				for (int c = b + 1; c < k - 3; c++)
					for (int d = c + 1; d < k - 2; d++)
						for (int e = d + 1; e < k - 1; e++)
							for (int f = e + 1; f < k; f++)
                                    cout<<ar[a]<<' '<<ar[b]<<' '<<ar[c]<<' '<<ar[d]<<' '<<ar[e]<<' '<<ar[f]<<"\n";
        
        
    }
    return 0;
}