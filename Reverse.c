#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;        // Get the last digit
        reverse = reverse * 10 + remainder; // Add the digit to the reverse number
        num /= 10;                   // Remove the last digit from the number
    }

    // Output the reversed number
    printf("Reversed Number: %d\n", reverse);

    return 0;
}
