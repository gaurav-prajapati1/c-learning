#include <stdio.h>

// a. Factorial of a number
unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// b1. Display digits from left to right
void displayLeftToRight(int n) {
    if (n == 0)
        return;
    displayLeftToRight(n / 10);
    printf("%d ", n % 10);
}

// b2. Display digits from right to left
void displayRightToLeft(int n) {
    if (n == 0)
        return;
    printf("%d ", n % 10);
    displayRightToLeft(n / 10);
}

// c. Compute x^y using only multiplication (y >= 0)
unsigned long long power(int x, int y) {
    if (y == 0)
        return 1;
    return x * power(x, y - 1);
}

int main() {
    int n, x, y;

    // Factorial
    printf("Enter a number for factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d is %llu\n", n, factorial(n));

    // Display digits
    printf("Enter a number to display digits left to right and right to left: ");
    scanf("%d", &n);
    printf("Digits left to right: ");
    if (n == 0) printf("0 ");
    else displayLeftToRight(n);
    printf("\nDigits right to left: ");
    if (n == 0) printf("0 ");
    else displayRightToLeft(n);
    printf("\n");

    // Power
    printf("Enter base and exponent (x y) to compute x^y: ");
    scanf("%d %d", &x, &y);
    printf("%d^%d = %llu\n", x, y, power(x, y));

    return 0;
}
