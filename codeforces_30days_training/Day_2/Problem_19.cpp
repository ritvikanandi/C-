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
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int temp = n;
    int flag = 0;
    while (n != 0)
    {
        if (flag == 0)
        {
            n -= gcd(a, n);
            flag = 1;
        }
        else
        {
            n -= gcd(b, n);
            flag = 0;
        }
    }
    if (flag == 0)
    {
        p1(1);
    }
    else
    {
        p1(0);
    }
}

int main()
{
    ios;
    solve();
    return 0;
}