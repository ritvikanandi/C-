#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> adj[100002];
bool visited[100002];
//find disconnected components
void dfs(ll v)
{
    visited[v] = true;
    for (ll u : adj[v])
    {
        if (!visited[u])
            dfs(u);
    }
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> v;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            v.push_back(i);
            dfs(i);
        }
    }
    cout << v.size() - 1 << "\n";
    for (int i = 1; i < v.size(); i++)
    {
        cout << v[i - 1] << " " << v[i] << "\n";
    }
}
int main()
{
    solve();
    return 0;
}