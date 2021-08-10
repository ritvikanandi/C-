#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> pr(n);
    vector<ll> pa(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pa[i];
    }
    //dp[j] is max pages for max price j
    vector<ll> dp(x + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = x; j >= pr[i]; j--)
        {
            if (j >= pr[i])
            {
                dp[j] = max(dp[j - pr[i]] + pa[i], dp[j]);
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