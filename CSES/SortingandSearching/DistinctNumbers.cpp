#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    set<ll> st;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (st.find(a) == st.end())
        {
            count++;
        }
        st.insert(a);
    }
    cout << count << "\n";
}
int main()
{
    solve();
    return 0;
}