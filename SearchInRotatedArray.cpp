#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = 8;
    int k = 0;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            cout << "The Element is at index : " << mid;
            break;
        }
        else if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k <= arr[mid])
            {
                // element exists:
                high = mid - 1;
            }
            else
            {
                // element does not exist:
                low = mid + 1;
            }
        }
        else
        { // if right part is sorted:
            if (arr[mid] <= k && k <= arr[high])
            {
                // element exists:
                low = mid + 1;
            }
            else
            {
                // element does not exist:
                high = mid - 1;
            }
        }
    }

    return 0;
}