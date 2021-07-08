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
    int pos1 = 0, pos2 = 0;
    vector<int> v(n);
    cin >> v[0];
    f1(i, 1, n)
    {
        cin >> v[i];
        if (v[i] > v[pos1])
            pos1 = i;
        if (v[i] <= v[pos2])
            pos2 = i;
    }
    int ans;
    if (pos1 < pos2)
        ans = n - 1 + pos1 - pos2;
    else if (pos1 == pos2)
        ans = 0;
    else
        ans = n - 2 + pos1 - pos2;

    p1(ans);
}

int main()
{
    ios;
    solve();
    return 0;
}