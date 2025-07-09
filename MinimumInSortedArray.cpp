#include<bits./stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4,5,6,7,0,1,2,3};
    int n = 8;
    int minEle = INT_MAX;
    int low = 0, high = n-1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] >= arr[mid])
        {
            minEle = min(minEle,arr[mid]);
            high = mid - 1;
        }
        else{
            minEle = min(minEle ,arr[low]);
            low = mid + 1;
        }
        
    }
    cout<<"The Minimum Element is: "<<minEle;
    
    return 0;
}