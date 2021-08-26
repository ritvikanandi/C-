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
ll gcd(ll x, ll y)
{
    return y ? gcd(y, x % y) : x;
}
ll lcm(ll x, ll y)
{
    return x / gcd(x, y) * y;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    f1(i, 1, n + 1)
    {
        cin >> a[i];
    }
    int final_count = 0;
    f1(i, 1, n + 1)
    {
        bool flag = true;
        f1(i, 1, n + 1)
        {
            if (a[i] != i)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            break;
        if (i & 1)
        {
            for (int j = 1; j <= (n - 2); j += 2)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                }
            }
        }
        else
        {
            for (int j = 2; j <= (n - 1); j += 2)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                }
            }
        }
        final_count++;
    }
    p1(final_count);
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