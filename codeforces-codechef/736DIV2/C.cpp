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
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    mem(arr, 0);
    f(i, m)
    {
        ll u, v;
        cin >> u >> v;
        ll min_m = min(u, v);
        arr[min_m - 1]++;
    }
    ll ans = n;
    f(i, n)
    {
        if (arr[i] > 0)
            ans--;
    }
    ll q;
    cin >> q;
    f(i, q)
    {
        string x;
        getline(cin, x);
        if (x.length() > 1)
        {
            ll u, v;
            u = x[2] - '0';
            v = x[x.length() - 1] - '0';
            ll min_m = min(u, v);
            if (x[0] == '1')
            {
                if (arr[min_m - 1] == 0)
                {
                    ans--;
                }
                arr[min_m - 1]++;
            }
            else
            {
                if (arr[min_m - 1] <= 1)
                {
                    ans++;
                }
                arr[min_m - 1]--;
            }
        }
        else
        {
            p1(ans);
        }
    }
}

int main()
{
    ios;
    solve();
    return 0;
}