class Solution
{
public:
    string rec(int n)
    {
        if (n == 0 or n == 26)
            return "Z";
        else if (n > 0 and n < 26)
        {
            string s = "";
            char a = 'A' + n - 1;
            s += a;
            return s;
        }
        else if (n > 26)
        {
            int r = n % 26;
            int q = n / 26;
            if (r == 0)
                q--;
            return rec(q) + rec(r);
        }
        return "";
    }
    string convertToTitle(int columnNumber)
    {
        int n = columnNumber;
        return rec(n);
    }
};