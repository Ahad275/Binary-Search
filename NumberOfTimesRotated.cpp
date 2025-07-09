#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = 8;
    int minEle = INT_MAX;
    int index = -1;
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check if the current subarray is already sorted
        if (arr[low] <= arr[high])
        {
            if (arr[low] < minEle)
            {
                minEle = arr[low];
                index = low;
            }
            break;
        }

        // Check mid element
        if (arr[mid] < minEle)
        {
            minEle = arr[mid];
            index = mid;
        }

        // Decide which side to search
        if (arr[mid] >= arr[low])
        {
            // Left part sorted, go right
            low = mid + 1;
        }
        else
        {
            // Right part sorted, go left
            high = mid - 1;
        }
    }

    cout << "The Minimum Element is: " << minEle << endl;
    cout << "Index of Minimum Element: " << index << endl;
    cout << "The number of times array is rotated is: " << n - index;

    return 0;
}
