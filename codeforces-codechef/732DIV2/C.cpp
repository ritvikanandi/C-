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
    umap<int, ll> even;
    umap<int, ll> odd;
    f(i, n)
    {
        cin >> a[i];
        if (i % 2 == 0)
            even[a[i]]++;
        else
            odd[a[i]]++;
    }
    vector<int> b(n);
    b = a;
    sort(b.begin(), b.end());
    bool flag = true;
    f(i, n)
    {
        if (i % 2 == 0)
        {
            if (even[b[i]] > 0)
                even[b[i]]--;
            else
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (odd[b[i]] > 0)
                odd[b[i]]--;
            else
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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