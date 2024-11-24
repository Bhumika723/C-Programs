#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (num <= 1) {
        isPrime = 0;  // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // If divisible, it's not a prime number
                break;
            }
        }
    }

    // Output result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
