#include <stdio.h>
// Function to print binary representation of a number
void printBinary(int num) {
    // We’ll use bitwise operations
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
}
int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Even numbers between 1 and %d with their binary representations:\n", N);
    for (int i = 2; i <= N; i += 2) {
        printf("%d -> ", i);
        printBinary(i);
        printf("\n");
    }
    return 0;
}