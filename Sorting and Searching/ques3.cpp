// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, n;
        cin >> l >> n;
        int arr[l];
        for (int i = 0; i < l; i++)
            cin >> arr[i];
        if (findPair(arr, l, n))
            cout << 1 << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
} // } Driver Code Ends

bool bin_s(int arr[], int start, int end, int n)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == n)
            return true;
        else if (arr[mid] > n)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return false;
}
bool findPair(int arr[], int size, int n)
{
    sort(arr, arr + size);
    for (int i = 0; i < size - 1; i++)
        if (bin_s(arr, i + 1, size - 1, n + arr[i]))
            return true;
    return false;
}