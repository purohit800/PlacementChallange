class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        bool vis[m][n];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                vis[i][j] = false;
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!vis[i][j] and grid[i][j] == '1')
                {
                    vis[i][j] = true;
                    cout << i << " " << j;
                    q.push(make_pair(i, j));
                    count++;
                }
                while (!q.empty())
                {
                    int a = q.front().first;
                    int b = q.front().second;
                    q.pop();
                    if (a + 1 < m and b < n and !vis[a + 1][b] and grid[a + 1][b] == '1')
                    {
                        vis[a + 1][b] = true;
                        q.push(make_pair(a + 1, b));
                    }
                    if (a < m and b + 1 < n and !vis[a][b + 1] and grid[a][b + 1] == '1')
                    {
                        vis[a][b + 1] = true;
                        q.push(make_pair(a, b + 1));
                    }
                    if (a - 1 >= 0 and b >= 0 and !vis[a - 1][b] and grid[a - 1][b] == '1')
                    {
                        vis[a - 1][b] = true;
                        q.push(make_pair(a - 1, b));
                    }
                    if (a >= 0 and b - 1 >= 0 and !vis[a][b - 1] and grid[a][b - 1] == '1')
                    {
                        vis[a][b - 1] = true;
                        q.push(make_pair(a, b - 1));
                    }
                }
            }
        }
        return count;
    }
};