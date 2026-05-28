#include <stdio.h>
int main() {
    int n, sum = 0, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while (t > 0) {
        int d = t % 10;
        sum += d * d * d;
        t /= 10;
    }
    printf("%d is %sArmstrong\n", n, (sum == n) ? "" : "not ");
    return 0;
}