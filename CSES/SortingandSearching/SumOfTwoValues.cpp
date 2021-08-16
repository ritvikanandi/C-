#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = {a, i + 1};
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i].first + v[j].first > x)
        {
            j--;
        }
        else if (v[i].first + v[j].first < x)
        {
            i++;
        }
        else
        {
            if (v[i].second < v[j].second)
                cout << v[i].second << " " << v[j].second << "\n";
            else
                cout << v[j].second << " " << v[i].second << "\n";
            return;
        }
    }
    cout << "IMPOSSIBLE"
         << "\n";
}
int main()
{
    solve();
    return 0;
}