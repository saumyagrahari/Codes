#include <stdio.h>

// Function to count set bits in a number
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += (num & 1);  // Add 1 if the last bit is set
        num >>= 1;           // Right shift to check next bit
    }
    return count;
}

int main() {
    int N = 4;
    int totalSetBits = 0;

    for (int i = 1; i <= N; i++) {
        totalSetBits += countSetBits(i);
    }

    printf("Total set bits in numbers from 1 to %d = %d\n", N, totalSetBits);

    return 0;
}