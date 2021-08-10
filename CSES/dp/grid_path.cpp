#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    //dp[i][j] stores valid paths from i,j to n,n;
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    for (ll i = n - 1; i >= 0; i--)
    {
        for (ll j = n - 1; j >= 0; j--)
        {
            if (i == n - 1 && j == n - 1)
            {
                dp[i][j] = v[i][j] == '*' ? 0 : 1;
            }
            else if (i == n - 1)
            {
                dp[i][j] = v[i][j] == '*' ? 0 : dp[i][j + 1];
            }
            else if (j == n - 1)
            {
                dp[i][j] = v[i][j] == '*' ? 0 : dp[i + 1][j];
            }
            else
            {
                dp[i][j] = v[i][j] == '*' ? 0 : (dp[i + 1][j] + dp[i][j + 1]) % mod;
            }
        }
    }
    cout << dp[0][0] << "\n";
}
int main()
{
    solve();
    return 0;
}