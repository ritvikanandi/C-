#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    //dp[i] stores minimum number of coins for value i
    vector<ll> dp(x + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] <= i)
            {
                ll small = dp[i - v[j]];
                if (small != INT_MAX)
                {
                    dp[i] = min(dp[i], small + 1);
                }
            }
        }
    }
    if (dp[x] == INT_MAX)
        cout << "-1"
             << "\n";
    else
        cout << dp[x] << "\n";
}
int main()
{

    solve();
    return 0;
}