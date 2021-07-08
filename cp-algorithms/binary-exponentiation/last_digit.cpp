#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define ios ios_base::sync_with_stdio(false), cin.tie(NULL)
#define p1(x) cout << x << "\n"
#define inf 1e18
#define MOD 1000000007
ll power(ll x, ll y, ll mod)
{
    //x %= y;
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        x = (x * x) % mod;
        y >>= 1;
    }
    return res;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll res = power(a, b, MOD);
    p1(res % 10);
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