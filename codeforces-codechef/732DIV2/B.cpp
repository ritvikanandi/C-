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
    int n, m;
    cin >> n >> m;
    vector<string> in(n);
    vector<string> out(n - 1);
    int arr[m];
    mem(arr, 0);
    f(i, n)
    {
        cin >> in[i];
        f(j, m)
        {
            arr[j] += (in[i][j] - 97);
        }
    }
    f(i, n - 1)
    {
        cin >> out[i];
        f(j, m)
        {
            arr[j] -= (out[i][j] - 97);
        }
    }
    string s1 = "";
    f(i, m)
    {
        char ch = arr[i] + 97;
        s1 += ch;
    }
    p1(s1);
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