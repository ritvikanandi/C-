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
    string s, t, p;
    cin >> s >> t >> p;
    int arr1[26] = {0};
    int arr2[26] = {0};
    f(i, s.length())
    {
        arr1[s[i] - 65]++;
    }
    f(i, t.length())
    {
        arr1[t[i] - 65]++;
    }
    f(i, p.length())
    {
        arr2[p[i] - 65]++;
    }
    f(i, 26)
    {
        if (arr1[i] != arr2[i])
        {
            p1("NO");
            return;
        }
    }
    p1("YES");
}

int main()
{
    ios;
    solve();
    return 0;
}