#include <stdio.h>
int divide(int dividend, int divisor) {
    int quotient = 0, temp = 1, d = divisor;
    while (d <= dividend) { d <<= 1; temp <<= 1; }
    while (temp > 0) {
        if (dividend >= d) { dividend -= d; quotient += temp; }
        d >>= 1; temp >>= 1;
    }
    return quotient;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Quotient = %d\n", divide(a, b));
    return 0;
}