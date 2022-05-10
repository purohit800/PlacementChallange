class Solution
{
public:
    bool check_palindrome(string s, int l, int h)
    {
        int start = l, end = h;
        while (start < end)
        {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        int start = 0, end = s.size() - 1;
        if (check_palindrome(s, start, end))
            return true;
        bool a;
        while (start < end)
        {
            if (s[start] != s[end])
            {
                a = check_palindrome(s, start + 1, end) or check_palindrome(s, start, end - 1);
                return a;
            }
            start++;
            end--;
        }
        return a;
    }
};