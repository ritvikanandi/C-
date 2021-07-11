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
    string s;
    cin >> s;
    int n = s.length();
    bool ans = true;

    string a = s;
    sort(a.begin(), a.end());

    f(i, n)
    {
        if ((int)(a[i] - 'a') != i)
        {
            ans = false;
            break;
        }
    }

    if (ans)
    {
        int ind = -1;
        f(i, n)
        {
            if (s[i] == 'a')
            {
                ind = i;
            }
        }

        int i = ind - 1;
        while (i >= 0)
        {
            if (s[i] < s[i + 1])
            {
                ans = false;
                break;
            }
            i--;
        }
        i = ind + 1;
        while (i < n)
        {
            if (s[i - 1] > s[i])
            {
                ans = false;
                break;
            }
            i++;
        }
    }

    if (ans)
    {
        p1("YES");
    }
    else
    {
        p1("NO");
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