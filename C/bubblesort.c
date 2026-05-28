#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;     
            }
        }
    }
}
int main(){
    int n,i;
    int arr[]= {5, 3, 8, 4, 2};;
    // printf("enter the rows:");
    // scanf("%d",&n);
    // int arr[n];
    // printf("enter the elements:");
    // scanf("%d",&arr[n]);
    n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
 }
    return 0;
}