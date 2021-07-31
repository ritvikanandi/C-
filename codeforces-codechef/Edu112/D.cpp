#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define ios ios_base::sync_with_stdio(false), cin.tie(NULL)
#define pb push_back
#define po pop_back()
#define umap unordered_map
#define uset unordered_set
#define mod 1000000007
#define pi 3.141592653589793238
#define maxe *max_element
#define mine *min_element
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, k, n) for (int i = k; i < n; i++)
#define p0(x) cout << x << " "
#define p1(x) cout << x << "\n"
#define p2(x, y) cout << x << " " << y << endl
#define p3(x, y, z) cout << x << " " << y << " " << z << endl
#define ip pair<int, int>
#define pll pair<ll, ll>
#define mem(x, y) memset(x, y, sizeof(x))

void solve()
{
    int n, m;
    cin >> n >> m;
    ll dp[6][n];
    string s;
    cin >> s;
    vector<ip> v(m);
    //abc
    dp[0][0] = s[0] == 'a' ? 0 : 1;
    f1(i, 1, n)
    {
        dp[0][i] = dp[0][i - 1];
        if (i % 3 == 0)
        {
            if (s[i] != 'a')
                dp[0][i] += 1;
        }
        else if (i % 3 == 1)
        {
            if (s[i] != 'b')
                dp[0][i] += 1;
        }
        else if (i % 3 == 2)
        {
            if (s[i] != 'c')
                dp[0][i] += 1;
        }
    }
    //acb
    dp[1][0] = s[0] == 'a' ? 0 : 1;
    f1(i, 1, n)
    {
        dp[1][i] = dp[1][i - 1];
        if (i % 3 == 0)
        {
            if (s[i] != 'a')
                dp[1][i] += 1;
        }
        else if (i % 3 == 1)
        {
            if (s[i] != 'c')
                dp[1][i] += 1;
        }
        else if (i % 3 == 2)
        {
            if (s[i] != 'b')
                dp[1][i] += 1;
        }
    }
    //bac
    dp[2][0] = s[0] == 'b' ? 0 : 1;
    f1(i, 1, n)
    {
        dp[2][i] = dp[2][i - 1];
        if (i % 3 == 0)
        {
            if (s[i] != 'b')
                dp[2][i] += 1;
        }
        else if (i % 3 == 1)
        {
            if (s[i] != 'a')
                dp[2][i] += 1;
        }
        else if (i % 3 == 2)
        {
            if (s[i] != 'c')
                dp[2][i] += 1;
        }
    }
    //bca
    dp[3][0] = s[0] == 'b' ? 0 : 1;
    f1(i, 1, n)
    {
        dp[3][i] = dp[3][i - 1];
        if (i % 3 == 0)
        {
            if (s[i] != 'b')
                dp[3][i] += 1;
        }
        else if (i % 3 == 1)
        {
            if (s[i] != 'c')
                dp[3][i] += 1;
        }
        else if (i % 3 == 2)
        {
            if (s[i] != 'a')
                dp[3][i] += 1;
        }
    }
    //cab
    dp[4][0] = s[0] == 'c' ? 0 : 1;
    f1(i, 1, n)
    {
        dp[4][i] = dp[4][i - 1];
        if (i % 3 == 0)
        {
            if (s[i] != 'c')
                dp[4][i] += 1;
        }
        else if (i % 3 == 1)
        {
            if (s[i] != 'a')
                dp[4][i] += 1;
        }
        else if (i % 3 == 2)
        {
            if (s[i] != 'b')
                dp[4][i] += 1;
        }
    }
    //cba
    dp[5][0] = s[0] == 'c' ? 0 : 1;
    f1(i, 1, n)
    {
        dp[5][i] = dp[5][i - 1];
        if (i % 3 == 0)
        {
            if (s[i] != 'c')
                dp[5][i] += 1;
        }
        else if (i % 3 == 1)
        {
            if (s[i] != 'b')
                dp[5][i] += 1;
        }
        else if (i % 3 == 2)
        {
            if (s[i] != 'a')
                dp[5][i] += 1;
        }
    }
    f(i, m)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        ll ans = INT_MAX;
        if (l == 0)
        {
            ans = min(ans, dp[0][r]);
            ans = min(ans, dp[1][r]);
            ans = min(ans, dp[2][r]);
            ans = min(ans, dp[3][r]);
            ans = min(ans, dp[4][r]);
            ans = min(ans, dp[5][r]);
        }
        else
        {
            ans = min(ans, dp[0][r] - dp[0][l - 1]);
            ans = min(ans, dp[1][r] - dp[1][l - 1]);
            ans = min(ans, dp[2][r] - dp[2][l - 1]);
            ans = min(ans, dp[3][r] - dp[3][l - 1]);
            ans = min(ans, dp[4][r] - dp[4][l - 1]);
            ans = min(ans, dp[5][r] - dp[5][l - 1]);
        }
        p1(ans);
    }
}

int main()
{
    ios;
    solve();
    return 0;
}