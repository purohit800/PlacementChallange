class Solution
{
public:
    void push(vector<int> &nums, int i)
    {
        int n = nums.size();
        for (int j = i; j < n - 1; j++)
            swap(nums[j], nums[j + 1]);
    }
    int removeDuplicates(vector<int> &nums)
    {
        int k = 0;
        for (int i = 0; i < nums; i++)
        {
            if (nums[i] != nums[i - 1])
                k++;
        }
    }
};