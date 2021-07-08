#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int dp[n];
    dp[0] = 0;
    if (n < k)
        k = n;
    for (int i = 1; i <= k; i++)
    {
        int min_m = INT_MAX;
        for (int j = i - 1; j >= 0; j--)
            min_m = min(min_m, dp[j] + abs(v[i] - v[j]));
        dp[i] = min_m;
    }

    for (int i = k + 1; i < n; i++)
    {
        int min_m = INT_MAX;
        for (int j = i - 1; j >= i - k; j--)
            min_m = min(min_m, dp[j] + abs(v[i] - v[j]));
        dp[i] = min_m;
    }
    cout << dp[n - 1] << "\n";
}