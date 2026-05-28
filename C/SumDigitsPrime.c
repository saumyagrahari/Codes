#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int t = n; t > 0; t /= 10) sum += t % 10;

    int prime = 1;
    if (sum < 2) prime = 0;
    for (int i = 2; i * i <= sum; i++)
        if (sum % i == 0) prime = 0;

    printf("Sum of digits = %d, %s\n", sum, prime ? "Prime" : "Not Prime");
    return 0;
}