#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1, mid;

    // Loop until the search space is reduced to zero
    while (low <= high) {
        mid = (low + high) / 2; // Find the middle index

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid;  // Element found, return its index
        }
        // If target is greater, ignore the left half
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }
    
    return -1;  // Element not found
}

int main() {
    int n, i, target, result;

    // Ask user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    // Input the sorted array elements
    printf("Enter the elements (sorted in ascending order): \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask user for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Call binarySearch function
    result = binarySearch(arr, n, target);

    // Output the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
