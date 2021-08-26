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
    vector<int> a(n);
    vector<int> b(n);
    ll sum1 = 0, sum2 = 0;
    f(i, n)
    {
        cin >> a[i];
    }
    f(i, n)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int k = n / 4;
    f1(i, k, n)
    {
        sum1 += a[i];
        sum2 += b[i];
    }
    if (sum1 >= sum2)
    {
        cout << "0"
             << "\n";
        return;
    }
    int y = n / 4;
    int x = n / 4 - 1;
    int num_zero = 0;
    int count = 0;
    int r = n;
    while (sum1 < sum2)
    {
        sum1 += 100;
        num_zero++;
        if (x >= 0)
        {
            sum2 += b[x];
            x--;
        }
        r++;
        if (r / 4 > k)
        {
            k++;
            sum1 -= a[y];
            y++;

            if (num_zero < k)
            {
                sum2 -= b[x + 1];
                x++;
            }
        }
        count++;
    }
    p1(count);
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