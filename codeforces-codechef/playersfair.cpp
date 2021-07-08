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
#define p1(x) cout << x << endl
#define p2(x, y) cout << x << " " << y << endl
#define p3(x, y, z) cout << x << " " << y << " " << z << endl
#define ip pair<int, int>
#define pll pair<ll, ll>
#define mem(x, y) memset(x, y, sizeof(x))

void solve()
{
    vector<int> v(4);
    f(i, 4)
    {
        cin >> v[i];
    }
    int mo = v[0] > v[1] ? v[0] : v[1];
    int ms = v[2] > v[3] ? v[2] : v[3];
    vector<int> ans(2);
    ans[0] = mo;
    ans[1] = ms;
    sort(ans.begin(), ans.end());
    sort(v.begin(), v.end());
    if (ans[0] == v[2] && ans[1] == v[3])
    {
        p1("YES");
    }
    else
    {
        p1("NO");
    }
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