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
    vector<ip> v;
    char arr[n][m];
    f(i, n)
    {
        f(j, m)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '*')
                v.push_back(make_pair(i, j));
        }
    }
    int x, y;
    if (v[0].first == v[1].first)
        x = v[2].first;
    else if (v[1].first == v[2].first)
        x = v[0].first;
    else
        x = v[1].first;

    if (v[0].second == v[1].second)
        y = v[2].second;
    else if (v[1].second == v[2].second)
        y = v[0].second;
    else
        y = v[1].second;

    p2(x + 1, y + 1);
}

int main()
{
    ios;
    solve();
    return 0;
}