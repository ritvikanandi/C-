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
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    umap<ll, int> mp_a;
    umap<ll, int> mp_b;
    f(i, n)
    {
        cin >> a[i];
        mp_a[a[i]] = i;
    }
    f(i, n)
    {
        cin >> b[i];
        mp_b[b[i]] = i;
    }
    int indb = -1;
    int inda = -1;
    f(i, n)
    {
        if (mp_b.find(n - a[i]) != mp_b.end())
        {
            indb = mp_b[n - a[i]];
            inda = i;
            break;
        }
        if (mp_b.find(2 * n - a[i]) != mp_b.end())
        {
            indb = mp_b[2 * n - a[i]];
            inda = i;
            break;
        }
        if (mp_b.find(3 * n - a[i]) != mp_b.end())
        {
            indb = mp_b[3 * n - a[i]];
            inda = i;
            break;
        }
        if (mp_b.find(4 * n - a[i]) != mp_b.end())
        {
            indb = mp_b[4 * n - a[i]];
            inda = i;
            break;
        }
    }
    vector<ll> c(n);
    if (indb != -1 && inda != -1)
    {
        if (indb == inda)
            c = b;
        else if (indb < inda)
        {
            int j = 0;
            f1(i, indb + 1, n)
            {
                c[j] = b[i];
                j++;
            }
            f(i, indb + 1)
            {
                c[j] = b[i];
            }
        }
        else
        {
            int a = indb - inda;
            int j = 0;
            f1(i, a, n)
            {
                c[j] = b[i];
                j++;
            }
            f(i, a)
            {
                c[j] = b[i];
            }
        }
    }
    else
    {
        int min_m = 0;
        f(i, n)
        {
            if (b[i] < b[min_m])
            {
                min_m = i;
            }
        }
        if (min_m > 0)
        {
            int j = 0;
            f1(i, min_m, n)
            {
                c[j] = b[i];
                j++;
            }
            f(i, min_m)
            {
                c[j] = b[i];
            }
        }
        else
        {
            c = b;
        }
    }
    f(i, n)
    {
        p0((a[i] + c[i]) % n);
    }
    cout << "\n";
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