class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int c0 = 0, c1 = 0, c2 = 0;
        for (int i : nums)
        {
            if (i == 0)
                c0++;
            else if (i == 1)
                c1++;
            else
                c2++;
        }
        int ind = 0;
        for (int i = 0; i < c0; i++)
            nums[i] = 0;
        ind = c0;
        for (int i = ind; i < ind + c1; i++)
            nums[i] = 1;
        ind += c1;
        for (int i = ind; i < ind + c2; i++)
            nums[i] = 2;
    }
};