#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> apt(n);
    vector<ll> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> apt[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll count = 0;
    sort(apt.begin(), apt.end());
    sort(b.begin(), b.end());
    ll i = 0, j = 0;
    while (i < n && j < m)
    {
        if (b[j] < apt[i] - k)
        {
            j++;
        }
        else if (b[j] > apt[i] + k)
        {
            i++;
        }
        else
        {
            count++;
            i++;
            j++;
        }
    }
    cout << count << "\n";
}
int main()
{
    solve();
    return 0;
}