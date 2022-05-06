class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        int mi = INT_MAX;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            mi = min(mi, nums[i]);
            sum += nums[i];
        }
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            ans += nums[i] - mi;
        return ans;
    }
};