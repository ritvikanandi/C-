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
ll gcd(ll x, ll y)
{
    return y ? gcd(y, x % y) : x;
}
ll lcm(ll x, ll y)
{
    return x / gcd(x, y) * y;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    //1
    if (n == 1)
    {
        if (s[0] == '?')
            p1('B');
        else
            p1(s[0]);
        return;
    }
    // first non ? character
    int idx = -1;
    f(i, n)
    {
        if (s[i] == 'B' || s[i] == 'R')
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        string s1 = "";
        s1 += 'B';
        f1(i, 1, n)
        {
            if (s1[i - 1] == 'B')
                s1 += 'R';
            else
                s1 += 'B';
        }
        p1(s1);
        return;
    }
    //store the previous values
    for (int i = idx - 1; i >= 0; i--)
    {
        if (s[i + 1] == 'B')
            s[i] = 'R';
        else
            s[i] = 'B';
    }
    //store forward values
    for (int i = idx + 1; i < n; i++)
    {
        if (s[i] != '?')
            continue;
        if (s[i - 1] == 'B')
            s[i] = 'R';
        else
            s[i] = 'B';
    }
    p1(s);
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