#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> adj[100001];
vector<bool> visited(100001, false);
int parent[100001];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    parent[s] = 0;
    visited[s] = true;
    while (!q.empty())
    {
        int top = q.front();
        q.pop();
        for (int u : adj[top])
        {
            if (!visited[u])
            {
                q.push(u);
                visited[u] = true;
                parent[u] = top;
            }
        }
    }
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
    bfs(1);
    if (!visited[n])
    {
        cout << "IMPOSSIBLE"
             << "\n";
    }
    else
    {
        vector<int> v;
        int i = n;
        while (i != 1)
        {
            v.push_back(i);
            i = parent[i];
        }
        v.push_back(1);
        cout << v.size() << "\n";
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
}
int main()
{
    solve();
    return 0;
}