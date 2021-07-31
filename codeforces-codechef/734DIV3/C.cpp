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
bool compare(ip i1, ip i2)
{
    return i1.second < i2.second;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ip> a(n);
    f(i, n)
    {
        int ax;
        cin >> ax;
        a[i] = {ax, i};
    }
    sort(a.begin(), a.end());
    vector<int> c(n);
    int count = 1;
    int prev = 0;
    f(i, n)
    {
        c[i] = count;
        if (i + 1 < n && a[i + 1].first == a[i].first && (count == k || count == 0))
        {
            count = 0;
            continue;
        }
        if (count == k)
        {
            count = 1;
            continue;
        }
        count++;
    }
    f(i, n)
    {
        a[i].first = c[i];
    }
    sort(a.begin(), a.end(), compare);
    f(i, n)
    {
        p0(a[i].first);
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