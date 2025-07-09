#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int n = 10;
    int k = 1;
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
            if (arr[mid] >= k && arr[low] <= k)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else{
            if (arr[mid] <= k && arr[high] >= k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return 0;
}