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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int pos1 = 0, pos2 = 0;
    f(i, n)
    {
        if (s[i] == 'G')
            pos1 = i;
        if (s[i] == 'T')
            pos2 = i;
    }
    int min_m = min(pos1, pos2);
    int max_m = max(pos1, pos2);
    int j = min_m;
    while (j <= max_m)
    {
        if (s[j] == '#')
            break;
        j += k;
    }
    if (j - k == max_m)
        p1("YES");
    else
        p1("NO");
}

int main()
{
    ios;
    solve();
    return 0;
}