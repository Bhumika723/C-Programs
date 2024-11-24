#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer pointing to the first element of the array
    int i;

    // Demonstrating pointer arithmetic
    printf("Array elements using pointer arithmetic:\n");

    for (i = 0; i < 5; i++) {
        // Accessing array elements using pointer arithmetic
        printf("Element %d: %d\n", i+1, *(ptr + i));
    }

    // Pointer increment (ptr points to the next element)
    printf("\nPointer increment demonstration:\n");
    printf("Current element (ptr): %d\n", *ptr);
    ptr++;  // Move to the next element
    printf("Next element (ptr after increment): %d\n", *ptr);

    // Pointer decrement (ptr points to the previous element)
    printf("\nPointer decrement demonstration:\n");
    ptr--;  // Move to the previous element
    printf("Previous element (ptr after decrement): %d\n", *ptr);

    // Pointer subtraction (find difference between two pointers)
    int *ptr2 = &arr[4];  // Pointer to the last element of the array
    printf("\nPointer subtraction demonstration:\n");
    printf("Pointer difference: %ld\n", ptr2 - ptr);  // Difference in terms of number of elements

    return 0;
}
