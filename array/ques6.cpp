class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0;
        int n = prices.size() - 1;
        int mx = prices[n];
        for (int i = n - 1; i >= 0; i--)
        {
            if (prices[i] >= mx)
                mx = prices[i];
            else
                ans = max(ans, mx - prices[i]);
        }
        return ans;
    }
};