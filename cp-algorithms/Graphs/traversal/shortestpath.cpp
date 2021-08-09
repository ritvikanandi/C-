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
#define p1(x) cout << x << "\n"
#define p2(x, y) cout << x << " " << y << endl
#define p3(x, y, z) cout << x << " " << y << " " << z << endl
#define ip pair<int, int>
#define pll pair<ll, ll>
#define mem(x, y) memset(x, y, sizeof(x))
const int N = 3e3 + 10, INF = 2e9 + 10;
int n, m, k, a, b, c, par[N][N], dis[N][N];
vector<int> adj[N];
queue<ip> q;
map<pair<int, pair<int, int>>, bool> mark;
vector<int> ans;

ll gcd(ll x, ll y)
{
    return y ? gcd(y, x % y) : x;
}
ll lcm(ll x, ll y)
{
    return x / gcd(x, y) * y;
}
void solve()
{
    cin >> n >> m >> k;
    f(i, m)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    f(i, k)
    {
        cin >> a >> b >> c;
        mark[{a, {b, c}}] = 1;
    }
    f1(i, 1, n + 1)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = INF;
        }
    }
    q.push({1, 1});
    dis[1][1] = 0;
    par[1][1] = 0;
    while (q.size())
    {
        int v = q.front().second;
        int u = q.front().first;
        q.pop();
        for (auto x : adj[v])
        {
            if (dis[u][v] + 1 < dis[v][x] && mark[{u, {v, x}}] == 0)
            {
                dis[v][x] = dis[u][v] + 1;
                par[v][x] = u;
                q.push({v, x});
            }
        }
    }
    int mini = INF, p;
    for (int i = 1; i <= n; i++)
    {
        if (dis[i][n] < mini)
        {
            mini = dis[i][n];
            p = i;
        }
    }
    if (mini == INF)
    {
        p1(-1);
        return;
    }
    p1(mini);
    while (p != 0)
    {
        ans.push_back(n);
        int tmp = par[p][n];
        n = p;
        p = tmp;
    }
    reverse(ans.begin(), ans.end());
    for (auto x : ans)
    {
        p0(x);
    }
}

int main()
{
    ios;
    solve();
    return 0;
}