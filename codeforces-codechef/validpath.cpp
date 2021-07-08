#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define ios ios_base::sync_with_stdio(false), cin.tie(NULL)
#define pb push_back
#define po pop_back()
#define umap unordered_map
#define uset unordered_set
#define mod 1000000007
#define pi 3.141592653589793238
#define maxe *max_element
#define mine *min_element
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, k, n) for (int i = k; i < n; i++)
#define p0(x) cout << x << " "
#define p1(x) cout << x << endl
#define p2(x, y) cout << x << " " << y << endl
#define p3(x, y, z) cout << x << " " << y << " " << z << endl
#define ip pair<int, int>
#define pll pair<ll, ll>
#define mem(x, y) memset(x, y, sizeof(x))
vector<ll> vec[500001];
vector<ll> total;
vector<ll> endinh;
void dfs(int sv, int prev)
{
    for (auto i : vec[sv])
    {
        if (i == prev)
            continue;

        dfs(i, sv);
    }
    for (auto i : vec[sv])
    {
        total[sv] += total[i];
        total[sv] += endinh[i];
        endinh[sv] += endinh[i];
    }
}
void solve()
{
    ll n;
    cin >> n;
    total.assign(n + 1, 1);
    endinh.assign(n + 1, 1);
    f(i, n + 1)
    {
        vec[i].clear();
    }
    f(i, n - 1)
    {
        int u, v;
        cin >> u >> v;
        vec[u].pb(v);
        vec[v].pb(u);
    }

    dfs(1, -1);
    ll ans = total[1] % mod;
    p1(ans);
}

int main()
{
    ios;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}