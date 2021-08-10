#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    //dp[i] stores number of ways for value i
    vector<ll> dp(x + 1);
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (c[i] <= j)
                dp[j] = (dp[j] + dp[j - c[i]]) % mod;
        }
    }
    cout << dp[x] << "\n";
}
int main()
{
    solve();
    return 0;
}