#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long int
#define mod 1000000007
//dp[i][0] stores number of ways to fill from i to n when tiles are not linked
//dp[i][1] stores number of ways to fill from i to n when tiles are linked
ll dp[1000001][2];
void solve()
{
    ll n;
    cin >> n;
    ll ans = (dp[n - 1][0] + dp[n - 1][1]) % mod;
    cout << ans << "\n";
}
int main()
{
    ios;
    int t;
    cin >> t;
    ll x = 1000000;
    dp[0][0] = 1;
    dp[0][1] = 1;
    for (ll i = 1; i < x; i++)
    {
        ll op1 = (dp[i - 1][0] + dp[i - 1][1]) % mod;
        ll op2 = dp[i - 1][0];
        ll op3 = dp[i - 1][1];
        dp[i][0] = (op1 + op2 + (2 * op2) % mod) % mod;
        dp[i][1] = (op1 + op3) % mod;
    }
    while (t--)
    {
        solve();
    }

    return 0;
}