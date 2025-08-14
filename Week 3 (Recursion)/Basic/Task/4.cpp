#include <iostream>
using namespace std;

// Recursive helper function
int binarySearchHelper(int arr[], int start, int end, int target) {
    if (start > end)
        return -1; // target not found
    
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
        return mid; // found target

    else if (arr[mid] < target)
        return binarySearchHelper(arr, mid + 1, end, target); // search right half
    
    else
        return binarySearchHelper(arr, start, mid - 1, target); // search left half
}

// Wrapper function for ease of use
int binarySearch(int arr[], int size, int target) {
    return binarySearchHelper(arr, 0, size - 1, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int index = binarySearch(arr, size, target);

    if (index != -1)
        cout << "Output: " << index << "\n";
    else
        cout << "Output: -1\n";

    return 0;
}
