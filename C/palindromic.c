#include <stdio.h>
int main() {
    int n, i, flag = 1;
    // Ask user for size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Check palindrome
    for (i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            flag = 0;
            break;
                }
    }
    if (flag)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}