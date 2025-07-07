#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 5, 8, 15, 19};
    int n = 5;
    int x = 20;
    int low = 0, high = n - 1;
    int pos = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        
        if (x > arr[mid])
        {
            low = mid + 1;
        }
        else 
        {
            pos = mid;
            high = mid - 1;
        }
    }
    cout<<"position is : "<<pos;
    

    return 0;
}