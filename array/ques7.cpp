// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(), a.end());
        if (m == n)
            return a[a.size() - 1] - a[0];
        else
        {
            int s = m - 1;
            int ans = INT_MAX;
            for (int i = 0; i + s < n; i++)
            {
                if (ans > a[i + s] - a[i])
                    ans = a[i + s] - a[i];
            }
            return ans;
        }
    }
};

// { Driver Code Starts.
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        long long x;
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }

        long long m;
        cin >> m;
        Solution ob;
        cout << ob.findMinDiff(a, n, m) << endl;
    }
    return 0;
} // } Driver Code Ends