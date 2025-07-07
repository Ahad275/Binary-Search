#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 4, 13, 13, 13, 20, 40};
    int n = 7;
    int target = 13;
    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    cout << "Last occurance of target element is at position : " << ans;

    return 0;
}