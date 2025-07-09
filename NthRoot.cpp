#include <bits/stdc++.h>
using namespace std;

int power(int base, int exp)
{
    return pow(base, exp);
}

int main()
{
    int n = 3; // Find cube root
    int m = 27;

    int low = 1, high = m;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int val = power(mid, n);

        if (val == m)
        {
            ans = mid;
            break;
        }
        else if (val > m)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (ans != -1)
        cout << "The " << n << "th root of " << m << " is: " << ans << endl;
    else
        cout << "No integer root found" << endl;

    return 0;
}
