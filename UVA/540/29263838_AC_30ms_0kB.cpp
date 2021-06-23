#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t, ts = 1;
    while (cin >> t && t)
    {
        map<int, int> mp;
        for (int i = 0; i < t; i++)
        {
            int n;
            cin >> n;
            for (int j = 0; j < n; j++)
            {
                int x;
                cin >> x;
                mp[x] = i;
            }
        }
        vector<queue<int>> v(t);
        queue<int> q;
        string s;
        cout << "Scenario #" << ts++ << "\n";
        while (cin >> s && s != "STOP")
        {
            if (s == "ENQUEUE")
            {
                int member;
                cin >> member;
                int team = mp[member];
                if (v[team].empty())
                    q.push(team);
                v[team].push(member);
            }
            else if (s == "DEQUEUE")
            {
                int team = q.front();
                cout << v[team].front() << "\n";
                v[team].pop();
                if (v[team].empty())
                    q.pop();
            }
        }
        cout << "\n";
    }

    return 0;
}