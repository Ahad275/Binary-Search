#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = 11;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if mid is unique
        if ((mid == 0 || arr[mid] != arr[mid - 1]) && 
            (mid == n - 1 || arr[mid] != arr[mid + 1])) {
            cout << arr[mid];
            break;
        }

        // Adjust search space
        if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) ||
            (mid % 2 == 1 && arr[mid] == arr[mid - 1])) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return 0;
}
