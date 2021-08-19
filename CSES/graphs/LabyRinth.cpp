#include <bits/stdc++.h>
using namespace std;
int grid[1001][1001];
pair<int, int> path[1001][1001];
void BFS(pair<int, int> st, int n, int m)
{
    queue<pair<int, int>> q;
    q.push(st);
    //make it visited
    grid[st.first][st.second] = 2;
    while (!q.empty())
    {
        pair<int, int> a = q.front();
        q.pop();
        int i = a.first;
        int j = a.second;
        //up
        if (i - 1 >= 0 && grid[i - 1][j] == 1)
        {
            grid[i - 1][j] = 2;
            q.push({i - 1, j});
            path[i - 1][j] = {-1, 0};
        }
        //down
        if (i + 1 < n && grid[i + 1][j] == 1)
        {
            grid[i + 1][j] = 2;
            q.push({i + 1, j});
            path[i + 1][j] = {1, 0};
        }
        //left
        if (j - 1 >= 0 && grid[i][j - 1] == 1)
        {
            grid[i][j - 1] = 2;
            q.push({i, j - 1});
            path[i][j - 1] = {0, -1};
        }
        //right
        if (j + 1 < m && grid[i][j + 1] == 1)
        {
            grid[i][j + 1] = 2;
            q.push({i, j + 1});
            path[i][j + 1] = {0, 1};
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    pair<int, int> st, end;
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

            if (ch == 'A')
            {
                st = {i, j};
            }
            if (ch == 'B')
            {
                end = {i, j};
            }
        }
    }
    BFS(st, n, m);

    if (grid[end.first][end.second] != 2)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        cout << "YES"
             << "\n";
        string ans = "";
        int i = end.first, j = end.second;
        while (i != st.first || j != st.second)
        {
            pair<int, int> d = path[i][j];
            if (d.first == 0 && d.second == -1)
                ans += 'L';
            if (d.first == 0 && d.second == 1)
                ans += 'R';
            if (d.first == 1 && d.second == 0)
                ans += 'D';
            if (d.first == -1 && d.second == 0)
                ans += 'U';
            i -= d.first;
            j -= d.second;
        }
        reverse(ans.begin(), ans.end());
        cout << ans.length() << "\n"
             << ans;
    }
}
int main()
{
    solve();
    return 0;
}