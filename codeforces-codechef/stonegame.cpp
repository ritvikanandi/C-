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
    int inp[n];
    f(i, n) cin >> inp[i];
    int arr[5];
    int min_i = 0, max_i = 0;
    f(i, n)
    {
        if (inp[i] > inp[max_i])
            max_i = i;
        if (inp[i] < inp[min_i])
            min_i = i;
    }
    arr[0] = min_i + 1;
    arr[1] = max_i + 1;
    arr[2] = n - min_i;
    arr[3] = n - max_i;
    arr[4] = abs(min_i - max_i);
    sort(arr, arr + 5);
    p1(arr[0] + arr[1]);
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