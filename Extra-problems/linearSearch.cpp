#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int linearSearch(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i + 1; // Return index + 1 for 1-based indexing
        }
    }
    return -1;
}

int binarySearch(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end()); // Ensure the array is sorted for binary search
    int left = 0, right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid + 1;
        }
        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
       
    }
    return -1;
}
int main()
{

    vector<int> arr = {1, 5, 10, 2, 4, 3, 6, 8, 9};
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    int n;
    cout << "1. Linear Search" << endl;
    cout << "2. Binary Search" << endl;
    cout << "Enter the search type from above numbers :  ";
    cin >> n;
    switch (n)
    {
    case 1:
        {int result = linearSearch(arr, target);
        if (result != -1)
        {
            cout << "Element found at index: " << result << endl;
        }
        else
        {
            cout << "Element not found in the array." << endl;
        }}
        break;
    case 2:
        {int result2 = binarySearch(arr, target);
        if (result2 != -1)
        {
            cout << "Element found at index: " << result2 << endl;
        }
        else
        {
            cout << "Element not found in the array." << endl;
        }}
        break;

    default:
        cout << "Invalid search type selected." << endl;
        break;
    }

    return 0;
}