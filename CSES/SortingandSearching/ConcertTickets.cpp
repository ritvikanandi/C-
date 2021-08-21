#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> h(n);
    vector<ll> t(m);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t[i];
    }
    multiset<int, greater<int>> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(h[i]);
    }
    for (int i = 0; i < m; i++)
    {
        auto it = st.lower_bound(t[i]);
        if (it == st.end())
            cout << "-1"
                 << "\n";
        else
        {
            cout << *it << "\n";
            st.erase(it);
        }
    }
}
int main()
{
    solve();
    return 0;
}