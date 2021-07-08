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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    int n;
    cin >> n;

    vector<int> ev;
    vector<int> od;

    f(i, n)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            ev.pb(x);
        else
            od.pb(x);
    }
    ll a = ev.size();
    ll b = od.size();
    ll ans = (a * b + (a * (a - 1)) / 2);

    f(i, b - 1)
    {
        for (int j = i + 1; j < b; j++)
        {
            if (gcd(od[i], od[j]) > 1)
                ans++;
        }
    }
    p1(ans);
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