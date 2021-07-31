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
    int W, H;
    cin >> W >> H;
    int x[2], y[2];
    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];
    int w, h;
    cin >> w >> h;
    if (y[1] - y[0] + h > H && x[1] - x[0] + w > W)
    {
        p1(-1);
        return;
    }
    int ans = INT_MAX;
    if (y[1] - y[0] + h <= H)
    {
        ans = min(max(0, h - y[0]), max(0, h - H + y[1]));
    }
    if (x[1] - x[0] + w <= W)
    {
        ans = min(ans, min(max(0, w - x[0]), max(0, w - W + x[1])));
    }
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