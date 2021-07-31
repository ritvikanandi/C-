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
    int n;
    cin >> n;
    vector<ll> a(n);
    f(i, n) cin >> a[i];
    vector<ll> max_m(n, 0);
    vector<ll> min_m(n, 0);
    max_m[0] = a[0];
    min_m[0] = a[0];
    f1(i, 1, n)
    {
        max_m[i] = max(a[i - 1], a[i]);
        min_m[i] = min(a[i - 1], a[i]);
    }
    ll ans = INT_MIN;
    f1(i, 1, n)
    {
        ans = max(ans, max_m[i] * min_m[i]);
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