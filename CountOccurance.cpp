#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 2, 2, 3};
    int n = 8;
    int x = 2;
    int low = 0, high = n - 1;
    int first = -1, last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] < x)
        {

            low = mid + 1;
        }
        else
        {
            first = mid;
            high = mid - 1;
        }
    }
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > x)
        {
            last = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "Total number of target appear is : " << (last - first) ;

    return 0;
}