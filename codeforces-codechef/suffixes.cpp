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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> ans;
    vector<int> me(m);
    uset<int> s;
    f(i, n)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(arr[i]);
        ans.pb(s.size());
    }
    reverse(ans.begin(), ans.end());
    f(i, m)
    {
        cin >> me[i];
    }
    f(i, m)
    {
        cout << ans[me[i] - 1] << endl;
    }
}

int main()
{
    ios;
    solve();
    return 0;
}