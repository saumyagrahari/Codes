#include <stdio.h>
int is_bit_set(int num, int bit_position) {
    // Create a mask with the bit at bit_position set to 1
    int mask = 1 << bit_position;
    // Perform XOR operation
    int result = num ^ mask;
    // If result is less than num, the bit was set
    return (result < num);
}
int main() {
    int num = 13;  // Binary: 1010
    int bit_position = 3;  // 0-indexed
     if (is_bit_set(num, bit_position)) {
        printf("Bit %d is set.\n", bit_position);
    } else {
        printf("Bit %d is unset.\n", bit_position);
    }
    return 0;
}