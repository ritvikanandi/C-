#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<ll> k(n);
    for (int i = 0; i < n; i++)
        cin >> k[i];
    set<ll> st;
    int max_seq = 1;
    int s = 0;
    st.insert(k[0]);
    for (int end = 1; end < n; end++)
    {
        //out of operations
        while (st.find(k[end]) != st.end() && s < end)
        {
            st.erase(k[s]);
            s++;
        }
        st.insert(k[end]);
        max_seq = max(max_seq, end - s + 1);
    }
    cout << max_seq << "\n";
}
int main()
{
    solve();
    return 0;
}