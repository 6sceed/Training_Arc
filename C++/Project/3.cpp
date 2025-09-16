#include <iostream>
using namespace std;

// Logarithmic

int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int x;
    cout << "Enter target: ";
    cin >> x;
    int index = binarySearch(a, n, x);
    if (index != -1)
        cout << x << " Found at index " << index << endl;
    else
        cout << "Not found" << endl;
    return 0;
}
