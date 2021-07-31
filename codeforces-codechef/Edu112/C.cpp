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
    int m;
    cin >> m;
    int arr[2][m];
    f(i, 2)
    {
        f(j, m)
                cin >>
            arr[i][j];
    }
    ll dp[2][m];
    dp[0][m - 1] = 0;
    dp[1][0] = 0;
    for (int i = m - 2; i >= 0; i--)
        dp[0][i] = dp[0][i + 1] + arr[0][i + 1];

    f1(i, 1, m)
        dp[1][i] = dp[1][i - 1] + arr[1][i - 1];

    ll ans = INT_MAX;
    f(i, m)
    {
        ans = min(ans, max(dp[0][i], dp[1][i]));
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