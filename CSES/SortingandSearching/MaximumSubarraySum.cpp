#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll max_sum = v[0];
    ll maxEnding = v[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + v[i], v[i]);
        max_sum = max(max_sum, maxEnding);
    }
    cout << max_sum << "\n";
}
int main()
{
    solve();
    return 0;
}