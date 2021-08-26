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
    int h, w;
    cin >> h >> w;
    int a[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            a[i][j] = 0;
        }
    }
    a[0][w - 1] = 1;
    a[0][0] = 1;
    a[h - 1][0] = 1;
    a[h - 1][w - 1] = 1;
    for (int i = 1; i < w - 1; i++)
    {
        if (a[0][i - 1] != 1 && a[0][i + 1] != 1)
            a[0][i] = 1;
        if (a[h - 1][i - 1] != 1 && a[h - 1][i + 1] != 1)
            a[h - 1][i] = 1;
    }
    for (int i = 1; i < h - 1; i++)
    {
        if (a[i - 1][0] != 1 && a[i + 1][0] != 1)
            a[i][0] = 1;
        if (a[i - 1][w - 1] != 1 && a[i + 1][w - 1] != 1)
            a[i][w - 1] = 1;
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << a[i][j];
        }
        cout << "\n";
    }
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