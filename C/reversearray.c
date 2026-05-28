#include <stdio.h>

int main() {
    int n, i;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    printf("Reversed array:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}