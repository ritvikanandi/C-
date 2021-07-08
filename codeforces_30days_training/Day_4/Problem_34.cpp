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
    vector<int> a(n);
    f(i, n) cin >> a[i];
    int pos1 = 0;
    int pos2 = 1;
    int min_m = abs(a[0] - a[1]);
    f(i, n - 1)
    {
        if (min_m > abs(a[i] - a[i + 1]))
        {
            min_m = abs(a[i] - a[i + 1]);
            pos1 = i;
            pos2 = i + 1;
        }
    }
    if (min_m > abs(a[0] - a[n - 1]))
    {
        min_m = abs(a[0] - a[n - 1]);
        pos2 = 0;
        pos1 = n - 1;
    }
    cout << pos1 + 1 << " " << pos2 + 1 << endl;
}

int main()
{
    ios;
    solve();
    return 0;
}