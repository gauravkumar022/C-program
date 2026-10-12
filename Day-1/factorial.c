#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d is %llu\n", n, factorial);
    return 0;
}