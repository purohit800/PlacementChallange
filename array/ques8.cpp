class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v = nums;
        sort(nums.begin(), nums.end());
        int start = 0, end = nums.size() - 1;
        int a, b;
        while (start < end)
        {
            if (nums[start] + nums[end] == target)
            {
                a = nums[start];
                b = nums[end];
                break;
            }
            else if (nums[start] + nums[end] > target)
                end--;
            else
                start++;
        }
        int i1, i2;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == a)
            {
                i1 = i;
                break;
            }
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (v[i] == b)
            {
                i2 = i;
                break;
            }
        }
        return {i1, i2};
    }
};