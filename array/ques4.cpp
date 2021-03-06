class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        queue<pair<int, int>> q;
        int r = matrix.size();
        int c = matrix[0].size();
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (matrix[i][j] == 0)
                    q.push(make_pair(i, j));
            }
        }
        while (!q.empty())
        {
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for (int i = 0; i < c; i++)
                matrix[a][i] = 0;
            for (int i = 0; i < r; i++)
                matrix[i][b] = 0;
        }
    }
};