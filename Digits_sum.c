#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate sum of digits
    while (num != 0) {
        remainder = num % 10;        // Get the last digit
        sum += remainder;            // Add the last digit to the sum
        num /= 10;                   // Remove the last digit from the number
    }

    // Output the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
