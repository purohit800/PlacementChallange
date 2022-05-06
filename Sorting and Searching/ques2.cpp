#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {1, 3, 5, 7, 8, 9, 10, 11, 12, 15};
    int x;
    cin >> x;
    int start = 0, end = 9;
    int cl = 0, fl = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
            return x;
        else if (arr[mid] > x)
        {
            end = mid - 1;
            fl = arr[mid];
        }
        else
        {
            start = mid + 1;
            cl = arr[mid];
        }
    }
    cout << "Ceiling of " << x << " is " << cl << endl;
    cout << "Floor of " << x << " is " << fl << endl;
}