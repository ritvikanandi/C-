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
    vector<int> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    int c = 0;
    sort(v.begin(), v.end());
    int a = v[0];
    f1(i, 1, 4)
    {
        if (v[i] == a)
            c++;
        else
            a = v[i];
    }

    cout << c << endl;
}

int main()
{
    ios;
    int t;
    solve();
    return 0;
}