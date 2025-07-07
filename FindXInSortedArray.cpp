#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int k = 4;
    int i = 0, j = n-1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (k == arr[mid])
        {
            cout << "The Element is at position : " << mid+1;
            break;
        }

        else if (k < arr[mid])
        {
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }

    return 0;
}