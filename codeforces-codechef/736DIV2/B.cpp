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
    string s1, s2;
    cin >> s1 >> s2;
    ll count = 0;
    f(i, n)
    {
        if (s2[i] == '1')
        {
            if (i - 1 >= 0 && s1[i - 1] == '1')
            {
                count++;
                s1[i - 1] = '2';
                continue;
            }
            if (s1[i] == '0')
            {
                count++;
                s1[i] = '2';
                continue;
            }
            if (i + 1 < n && s1[i + 1] == '1')
            {
                count++;
                s1[i + 1] = '2';
            }
        }
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