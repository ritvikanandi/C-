#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
vector<bool> visited(100001, false);
vector<int> color(100001, 0);
bool dfs(int sv, int c)
{
    visited[sv] = true;
    color[sv] = c;
    for (int u : adj[sv])
    {
        if (!visited[u])
        {
            if (!dfs(u, 1 - c))
            {
                return false;
            }
        }
        else if (color[sv] == color[u])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (!dfs(i, 0))
            {
                flag = false;
                break;
            }
        }
    }
    if (flag == false)
    {
        cout << "IMPOSSIBLE"
             << "\n";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << color[i] + 1 << " ";
        }
    }
}
int main()
{
    solve();
    return 0;
}