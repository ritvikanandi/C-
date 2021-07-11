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
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    f(i, n) cin >> a[i];
    f(i, m) cin >> b[i];
    vector<int> ans;
    int flag = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == 0)
        {
            k++;
            ans.push_back(0);
            i++;
            continue;
        }
        if (b[j] == 0)
        {
            k++;
            ans.push_back(0);
            j++;
            continue;
        }
        if (a[i] < b[j])
        {
            if (a[i] > k)
            {
                flag = 1;
                break;
            }
            ans.push_back(a[i]);
            i++;
        }
        else
        {
            if (b[j] > k)
            {
                flag = 1;
                break;
            }
            ans.push_back(b[j]);
            j++;
        }
    }
    if (flag != 1)
    {
        while (i < n)
        {
            if (a[i] == 0)
            {
                k++;
                ans.push_back(0);
                i++;
                continue;
            }
            if (a[i] > k)
            {
                flag = 1;
                break;
            }
            ans.push_back(a[i]);
            i++;
        }
        while (j < m)
        {
            if (b[j] == 0)
            {
                k++;
                ans.push_back(0);
                j++;
                continue;
            }
            if (b[j] > k)
            {
                flag = 1;
                break;
            }
            ans.push_back(b[j]);
            j++;
        }
        if (flag)
            p1(-1);
        else
        {
            f(k, ans.size()) p0(ans[k]);
            cout << "\n";
        }
    }
    else
    {
        p1(-1);
    }
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
