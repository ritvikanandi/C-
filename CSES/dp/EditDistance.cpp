#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s, t;
    cin >> s >> t;
    ll n1 = s.length();
    ll n2 = t.length();
    //dp[i][j] till length i in s and j in t
    ll dp[n1 + 1][n2 + 1];
    for (ll i = 0; i <= n1; i++)
    {
        for (int j = 0; j <= n2; j++)
        {
            if (i == 0 && j == 0)
                dp[i][j] = 0;
            else if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else
            {
                if (s[i - 1] == t[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                {
                    dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1]));
                }
            }
        }
    }
    cout << dp[n1][n2] << "\n";
}
int main()
{
    solve();
    return 0;
}