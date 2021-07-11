#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false), cin.tie(NULL)
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, k, n) for (int i = k; i < n; i++)
#define ll long long int
#define mem(x, y) memset(x, y, sizeof(x))

void solve()
{
    int n, W;
    cin >> n >> W;
    vector<int> v(n);
    vector<int> wt(n);
    f(i, n)
    {
        cin >> wt[i] >> v[i];
    }
    ll dp[n + 1][W + 1];
    f1(i, 0, n + 1)
    {
        f1(j, 0, W + 1)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (wt[i - 1] <= j)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - wt[i - 1]] + v[i - 1]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][W] << endl;
}

int main()
{
    ios;
    solve();
    return 0;
}