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

void solve()
{
    int n, m, i, j;
    cin >> n >> m >> i >> j;
    int x1, x2, y1, y2;
    // x1 = i <= (n / 2) ? n : 1;
    // if (x1 == 1)
    // {
    //     if (i == n)
    //         x2 = n > 1 ? n - 1 : n;
    // }
    // else
    // {
    //     if (i == 1)
    //         x2 = n >= 2 ? 2 : 1;
    // }
    // y1 = j <= m / 2 ? m : 1;
    // if (y1 == 1)
    // {
    //     if (j == m)
    //         y2 = m > 1 ? m - 1 : m;
    // }
    // else
    // {
    //     if (j == 1)
    //         y2 = m >= 2 ? 2 : 1;
    // }
    if (i == 1 || i == n)
    {
        x1 = i;
        x2 = x1 == 1 ? n : 1;
    }
    else
    {
        x1 = 1;
        x2 = n;
    }
    if (j <= m / 2)
    {
        y1 = m;
        y2 = m;
    }
    else
    {
        y1 = 1;
        y2 = 1;
    }
    cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
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