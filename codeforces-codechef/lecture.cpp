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
    int n, m;
    cin >> n >> m;
    umap<string, string> arr(m);
    //uset<string> s(m);
    f(i, m)
    {
        string a1, b1;
        cin >> a1 >> b1;
        arr[a1] = b1;
    }
    //vector<string> c(n);
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        string b2 = arr[str];
        string min_m = str.length() <= b2.length() ? str : b2;
        p0(min_m);
    }
}

int main()
{
    ios;

    solve();

    return 0;
}