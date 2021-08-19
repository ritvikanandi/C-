#include <bits/stdc++.h>
using namespace std;
int grid[1001][1001];
void dfs(int n, int m, int i, int j)
{
    grid[i][j] = 2;
    if (i + 1 < n && grid[i + 1][j] == 1)
        dfs(n, m, i + 1, j);
    if (j + 1 < m && grid[i][j + 1] == 1)
        dfs(n, m, i, j + 1);
    if (i - 1 >= 0 && grid[i - 1][j] == 1)
        dfs(n, m, i - 1, j);
    if (j - 1 >= 0 && grid[i][j - 1] == 1)
        dfs(n, m, i, j - 1);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == '#')
                grid[i][j] = 0;
            else
                grid[i][j] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
            {
                count++;
                dfs(n, m, i, j);
            }
        }
    }
    cout << count << "\n";
}
int main()
{
    solve();
    return 0;
}