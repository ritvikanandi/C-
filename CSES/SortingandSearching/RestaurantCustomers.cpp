#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> dep(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] >> dep[i];
    }
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int i = 0, j = 0;
    ll count = 0;
    ll max_count = 0;
    while (i < n && j < n)
    {
        if (arr[i] < dep[j])
        {
            count++;
            i++;
        }
        else
        {
            count--;
            j++;
        }
        max_count = max(max_count, count);
    }
    cout << max_count << "\n";
}
int main()
{
    solve();
    return 0;
}