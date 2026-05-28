#include <stdio.h>

// Function to check if a number is an exact power of 2
int Power(int num) {
    // A number is a power of 2 if:
    // 1. It is greater than 0
    // 2. It has only one bit set in its binary representation
    //    i.e., num & (num - 1) == 0
    return (num > 0) && ((num & (num - 1)) == 0);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (Power(n)) {
        printf("%d is an exact power of 2.\n", n);
    } else {
        printf("%d is NOT an exact power of 2.\n", n);
    }

    return 0;
}