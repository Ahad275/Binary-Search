#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 4, 4, 7, 8, 10};
    int n = 6;
    int x = 5;
    int low = 0, high = n - 1;
    int first = -1, last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            first = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] <= x)
        {
            last = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout<<"Ceil is : "<<arr[first]<<" and "<<" Floor is : "<<arr[last]; 
    

    return 0;
}