#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool compare(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.second < b.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for (int i = 0; i < n; i++)
    {
        ll ar, dep;
        cin >> ar >> dep;
        arr[i] = {ar, dep};
    }
    sort(arr.begin(), arr.end(), compare);
    int i = 0;
    ll temp = 0;
    int count = 0;
    while (i < n)
    {
        if (arr[i].first >= temp)
        {
            temp = arr[i].second;
            count++;
        }
        i++;
    }
    cout << count << "\n";
}
int main()
{
    solve();
    return 0;
}