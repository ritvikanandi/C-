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
    int n;
    cin >> n;
    vector<char> v(n);
    f(i, n)
    {
        cin >> v[i];
    }
    stack<char> s;
    int open = 0;
    int close = 0;
    f(i, n)
    {
        if (v[i] == '(')
        {
            s.push(v[i]);
            open++;
        }
        if (v[i] == ')')
            close++;

        if (!s.empty())
        {
            if (v[i] == ')')
                s.pop();
        }
    }
    if (s.size() > 1 || open != close)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

int main()
{
    ios;

    solve();
    return 0;
}