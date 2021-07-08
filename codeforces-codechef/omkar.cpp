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
    uset<int> b;
    int flag = 0;
    f(i, n)
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        p1("NO");
        return;
    }

    f(i, n)
    {
        b.insert(v[i]);
    }
    int min_diff = 1;
    sort(b.begin(), b.end());
    f(i, n - 1)
    {
        min_diff = min(min_diff, (abs(v[i + 1] - v[i])));
    }
    int i = min(min_diff, v[0]);
    int max_ele;
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