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
    int n;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '4' and s[i] != '7')
        {
            cout << "NO";
            return;
        }
    }
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n / 2; i++)
    {
        sum1 += s[i] - '0';
    }
    for (int i = n / 2; i < n; i++)
    {
        sum2 += s[i] - '0';
    }

    if (sum1 == sum2)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}

int main()
{
    ios;
    solve();
    return 0;
}