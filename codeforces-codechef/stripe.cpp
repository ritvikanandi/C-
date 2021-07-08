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
    vector<int> v(n);
    vector<ip> arr(n);
    int sum = 0;
    f(i, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    int count = 0;
    arr[0] = make_pair(0, sum);
    f1(i, 1, n)
    {
        arr[i].first = arr[i - 1].first + v[i - 1];
        arr[i].second = arr[i - 1].second - v[i - 1];
        //p2(arr[i].first, arr[i].second);
        if (arr[i].first == arr[i].second)
            count++;
    }
    p1(count);
}

int main()
{
    ios;
    solve();
    return 0;
}