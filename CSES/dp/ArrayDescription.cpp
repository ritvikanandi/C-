#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    //dp[i][j] denotes at ith (i+1 elements) position j is placed
    vector<vector<ll>> dp(n, vector<ll>(m + 1, 0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            if (i == 0)
            {
                if (v[i] == 0 || v[i] == j)
                    dp[i][j] = 1;
                else
                    dp[i][j] = 0;
            }
            else
            {
                if (v[i] == 0 || v[i] == j)
                {
                    dp[i][j] = dp[i - 1][j];
                    if (j - 1 >= 1)
                        dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % mod;
                    if (j + 1 <= m)
                        dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % mod;
                }
                else
                    dp[i][j] = 0;
            }
        }
    }
    ll ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans = (ans + dp[n - 1][i]) % mod;
    }
    cout << ans << "\n";
}
int main()
{
    solve();
    return 0;
}