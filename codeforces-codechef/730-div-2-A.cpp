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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return (b, a % b);
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "0"
             << " "
             << "0" << endl;
        return;
    }
    // if (abs(a - b) == 1)
    // {
    //     cout << "1"
    //          << " "
    //          << "0" << endl;
    //     return;
    // }
    // ll diff = abs(a - b);
    // ll l1 = a % diff;
    // ll min_m = abs(l1 - diff);
    // p2(diff, min_m);
    ll min_m = min(a, b);
    ll diff = abs(a - b);
    ll a1 = min(min_m % diff, diff - min_m % diff);
    p2(diff, a1);
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