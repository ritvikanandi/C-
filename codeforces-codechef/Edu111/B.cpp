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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    if (b == 0)
    {
        p1(n * a);
        return;
    }
    if (b < 0)
    {
        if (s[0] == '0' && s[n - 1] == '0')
        {
            int c = 1;
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i] == '1' && s[i - 1] != '1')
                    c++;
            }
            p1(n * a + c * b);
            return;
        }
        if (s[0] == '1' && s[n - 1] == '1')
        {
            int c = 1;
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i] == '0' && s[i - 1] != '0')
                    c++;
            }
            p1(n * a + c * b);
            return;
        }
        int k = 1;
        if (s[0] == '1')
            k++;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1' && s[i - 1] != '1')
                k++;
        }
        p1(n * a + k * b);
        return;
    }
    p1(n * (a + b));
}

int main()
{
    ios;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}