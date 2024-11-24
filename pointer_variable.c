#include <stdio.h>

// Function that takes a pointer to an integer and changes its value
void changeValue(int *ptr) {
    // Dereference the pointer and change the value
    *ptr = 100;
}

int main() {
    int num = 5;

    // Print the initial value of num
    printf("Before change: %d\n", num);

    // Pass the address of num to the function
    changeValue(&num);

    // Print the new value of num after the function call
    printf("After change: %d\n", num);

    return 0;
}
