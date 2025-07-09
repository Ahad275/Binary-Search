#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 28;
    int low = 1, high = n;
    int ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid * mid <= n) 
        {
            ans = mid;          // Store potential answer
            low = mid + 1;      // Search in the right half
        }
        else
        {
            high = mid - 1;     // Search in the left half
        }
    }

    cout << ans << endl;

    return 0;
}
