#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    if (n <= 6)
    {
        for (int i = 2; i <= n; i++)
        {
            dp[i] = 1;
            dp[i] = (dp[i] + dp[i - 1]) % mod;
            if (i - 2 >= 0)
                dp[i] = (dp[i] + dp[i - 2]) % mod;
            if (i - 3 >= 0)
                dp[i] = (dp[i] + dp[i - 3]) % mod;
            if (i - 4 >= 0)
                dp[i] = (dp[i] + dp[i - 4]) % mod;
            if (i - 5 >= 0)
                dp[i] = (dp[i] + dp[i - 5]) % mod;
            if (i - 6 >= 0)
                dp[i] = (dp[i] + dp[i - 6]) % mod;
        }
    }
    else
    {
        for (int i = 2; i <= 6; i++)
        {
            dp[i] = 1;
            dp[i] = (dp[i] + dp[i - 1]) % mod;
            if (i - 2 >= 0)
                dp[i] = (dp[i] + dp[i - 2]) % mod;
            if (i - 3 >= 0)
                dp[i] = (dp[i] + dp[i - 3]) % mod;
            if (i - 4 >= 0)
                dp[i] = (dp[i] + dp[i - 4]) % mod;
            if (i - 5 >= 0)
                dp[i] = (dp[i] + dp[i - 5]) % mod;
            if (i - 6 >= 0)
                dp[i] = (dp[i] + dp[i - 6]) % mod;
        }
        for (int i = 7; i <= n; i++)
        {
            dp[i] = (dp[i] + dp[i - 1]) % mod;
            if (i - 2 >= 0)
                dp[i] = (dp[i] + dp[i - 2]) % mod;
            if (i - 3 >= 0)
                dp[i] = (dp[i] + dp[i - 3]) % mod;
            if (i - 4 >= 0)
                dp[i] = (dp[i] + dp[i - 4]) % mod;
            if (i - 5 >= 0)
                dp[i] = (dp[i] + dp[i - 5]) % mod;
            if (i - 6 >= 0)
                dp[i] = (dp[i] + dp[i - 6]) % mod;
        }
    }
    cout << dp[n] << "\n";
    return 0;
}