#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    vector<ll> dp(n + 1, INT_MAX);
    dp[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll temp = i;
        while (temp != 0)
        {
            int dig = temp % 10;
            dp[i] = min(dp[i], 1 + dp[i - dig]);
            temp /= 10;
        }
    }
    cout << dp[n] << "\n";
}
int main()
{
    solve();
    return 0;
}