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
#define p1(x) cout << x << endl
#define p2(x, y) cout << x << " " << y << endl
#define p3(x, y, z) cout << x << " " << y << " " << z << endl
#define ip pair<int, int>
#define pll pair<ll, ll>
#define mem(x, y) memset(x, y, sizeof(x))

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    ll sum1 = 0;
    ll sum2 = 0;
    f(i, n)
    {
        cin >> v[i];
        sum1 += abs(v[i] - 1);
        sum2 += abs(v[i] + 1);
    }
    ll final;
    if (n % 2 == 0)
        final = min(sum1, sum2);
    else
    {
        ll dp;
        ll min_m = INT_MAX;
        f(i, n)
        {
            dp = sum2 - abs(v[i] + 1) + abs(v[i] - 1);
            min_m = min(dp, min_m);
        }
        final = min(sum1, min_m);
    }
    p1(final);
}

int main()
{
    ios;
    solve();
    return 0;
}