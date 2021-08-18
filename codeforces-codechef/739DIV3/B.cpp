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
    ll a, b, c;
    cin >> a >> b >> c;
    if (abs(a - b) <= 1)
    {
        cout << "-1"
             << "\n";
        return;
    }
    ll min_m = min(a, b);
    ll max_m = max(a, b);
    ll n = 2 * (max_m - min_m);
    if (min_m - 1 > max_m - min_m - 1)
    {
        cout << "-1"
             << "\n";
        return;
    }
    if (c < min_m || (c > min_m && c < max_m))
    {
        if (c + max_m - min_m > n)
            cout << (c + max_m - min_m) % n << "\n";
        else
            cout << (c + max_m - min_m) << "\n";
        return;
    }
    if (c > max_m)
    {
        if (c > n)
            cout << "-1"
                 << "\n";
        else
        {
            if (c + max_m - min_m > n)
                cout << (c + max_m - min_m) % n << "\n";
            else
                cout << (c + max_m - min_m) << "\n";
        }
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