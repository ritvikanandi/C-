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
#define p1(x) cout << x << endl
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
    for (auto &x : v)
    {
        cin >> x;
    }

    vector<int> leftmin(n), rightmin(n);
    for (int i = 0; i < n; i++)
    {
        if (i)
            leftmin[i] = min(leftmin[i - 1], v[i]);
        else
            leftmin[i] = v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
            rightmin[i] = v[i];
        else
            rightmin[i] = min(rightmin[i + 1], v[i]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > max(leftmin[i], rightmin[i]))
        {
            cout << "YES" << endl;
            for (int j = i - 1; j >= 0; j--)
            {
                if (v[j] == leftmin[i])
                {
                    cout << j + 1 << " ";
                    break;
                }
            }
            cout << i + 1 << " ";
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] == rightmin[i])
                {
                    cout << j + 1 << endl;
                    break;
                }
            }
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios;

    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        solve();
    }

    return 0;
}