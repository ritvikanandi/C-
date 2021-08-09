#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long int
ll x = 1e5 + 5;
vector<vector<ll>> adj(x);
ll ans = 0;
void dfs(ll v, ll p, ll c, ll max_c, ll m, const vector<int> &a)
{
    if (a[v] == 1)
        c++;
    else
        c = 0;
    max_c = max(max_c, c);
    //check for leaf
    int numc = 0;
    for (ll u : adj[v])
    {
        if (u != p)
        {
            dfs(u, v, c, max_c, m, a);
            numc++;
        }
    }
    if (numc == 0 && max_c <= m)
        ans++;
}
int main()
{
    ios;
    ll n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    dfs(0, -1, 0, 0, m, v);
    cout << ans << "\n";
    return 0;
}