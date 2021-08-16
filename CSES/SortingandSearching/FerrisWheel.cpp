#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    ll count = 0;
    while (i <= j)
    {
        if (i == j && v[i] <= x)
        {
            count++;
            i++;
            j--;
            continue;
        }
        if (v[i] + v[j] <= x)
            i++;
        j--;
        count++;
    }
    cout << count << "\n";
}
int main()
{
    solve();
    return 0;
}