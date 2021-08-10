#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    //dp[i] stores distinct ways for value i
    vector<ll> dp(x + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] <= i)
            {
                ll sum = dp[i - v[j]];
                if (sum != 0)
                {
                    dp[i] = (dp[i] + dp[i - v[j]]) % mod;
                }
            }
        }
    }
    cout << dp[x] << "\n";
}
int main()
{
    solve();
    return 0;
}