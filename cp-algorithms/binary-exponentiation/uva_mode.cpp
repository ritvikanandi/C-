#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
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

ll power(ll x, ll y, int n)
{
    x %= n;
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % n;
        x = (x * x) % n;
        y >>= 1;
    }
    return res;
}
void solve()
{
    ll x, y;
    int n;
    cin >> x >> y >> n;
    ll z = power(x, y, n);
    p1(z);
}

int main()
{
    ios;
    int t;
    cin >> t;
    while (t != 0)
    {
        while (t--)
        {
            solve();
        }
        cin >> t;
    }

    return 0;
}