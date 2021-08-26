#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<ll> p(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    ll mid = p[n / 2];
    ll cost = 0;
    for (int i = 0; i < n; i++)
    {
        cost += (abs(p[i] - mid));
    }
    cout << cost << "\n";
}
int main()
{
    solve();
    return 0;
}