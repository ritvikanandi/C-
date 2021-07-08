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
    int n;
    cin >> n;
    vector<int> v(n);
    f(i, n) cin >> v[i];
    if (n == 1)
    {
        p1(v[0]);
        return;
    }
    sort(v.begin(), v.end());
    int min_diff = INT_MAX;
    int x1, x2;
    f(i, n - 1)
    {
        if (min_diff > (v[i + 1] - v[i]))
        {
            min_diff = v[i + 1] - v[i];
            x1 = i;
            x2 = i + 1;
        }
    }
    if (n == 2)
    {
        p2(v[0], v[1]);
        return;
    }
    if (n == 3)
    {
        if (x2 == 2)
            p3(v[1], v[0], v[2]);
        else
            p3(v[0], v[2], v[1]);
        return;
    }
    if (n == 4)
    {
        if (x2 == 1)
            cout << v[0] << " " << v[2] << " " << v[3] << " " << v[1] << endl;
        else if (x2 == 2)
            cout << v[1] << " " << v[3] << " " << v[0] << " " << v[2] << endl;
        else
            cout << v[2] << " " << v[0] << " " << v[1] << " " << v[3] << endl;
        return;
    }
    p0(v[x1]);
    f(i, x1) p0(v[i]);
    f1(i, x2 + 1, n) p0(v[i]);
    p1(v[x2]);
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