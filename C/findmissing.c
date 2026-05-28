#include <stdio.h>
// Function to find missing element
int findMissing(int arr[], int n) {
    int total = (n + 1) * (arr[0] + arr[n-1]) / 2; // sum of full sequence
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return total - sum;
}
int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissing(arr, n);
    printf("Missing element = %d\n", missing);
    return 0;
}