#include<stdio.h>
// Function to remove duplicates
int removeDuplicates(int arr[], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
           for (j = i + 1; j < n;) {
                        if (arr[i] == arr[j]) {
                // Shift elements left
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Reduce size
            } else {
                j++;
            }
        }
    }
    return n; // Return new size
}
int main() {
    int arr[10], n = 10, i;
     // Input 10 elements
    printf("Enter 10 elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Remove duplicates
    n = removeDuplicates(arr, n);
    // Display result
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}