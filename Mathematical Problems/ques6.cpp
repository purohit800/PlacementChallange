class Solution
{
public:
    int rev(int n)
    {
        long long int ans = 0;
        while (n != 0)
        {
            int a = n % 10;
            n = n / 10;
            ans = ans * 10;
            ans += a;
        }
        return ans;
    }
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        if (x >= 0)
        {
            int a = rev(x);
            return a == x;
        }
        return true;
    }
};