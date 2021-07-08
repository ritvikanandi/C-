#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ios ios_base::sync_with_stdio(false), cin.tie(NULL)
#define pb push_back
#define mod 1000000007
#define pi 3.141592653589793238
#define f(i, n) for (int i = 0; i < n; i++)
#define p1(x) cout << x << endl
#define ip pair<int, int>
#define pll pair<ll, ll>
#define mem(x, y) memset(x, y, sizeof(x))
vector<vector<int>> vec(300001, vector<int>(300001));
ll arr[3000001];

void dfs(int sv, int prev)
{
    for (auto i : vec[sv])
    {
        if (i == sv)
            continue;

        dfs(i, sv);
    }
    priority_queue<pll> pq;
    for (auto i : vec[sv])
    {
        pq.push(make_pair(arr[i], i));
    }
    int j = 1;
    while (pq.size() != 0)
    {
        arr[sv] += j * (pq.top().first);
        pq.pop();
        j++;
    }
}
void solve()
{
    ll n, x;
    cin >> n >> x;
    mem(arr, 0);
    f(i, n - 1)
    {
        int u, v;
        cin >> u >> v;
        vec[u].pb(v);
        vec[v].pb(u);
    }

    dfs(0, -1);

    ll ans = arr[1] % mod;
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