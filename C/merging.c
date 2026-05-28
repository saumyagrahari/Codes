#include <stdio.h>
int merge(int a[], int n1, int b[], int n2, int c[]) {
    int i=0, j=0, k=0;
    while(i<n1 && j<n2) {
        if(a[i] < b[j]) c[k++] = a[i++];
        else if(b[j] < a[i]) c[k++] = b[j++];
        else { c[k++] = a[i]; i++; j++; } // skip duplicate
        if(k>1 && c[k-1]==c[k-2]) k--;    // remove duplicate
    }
    while(i<n1) { if(k==0||c[k-1]!=a[i]) c[k++]=a[i]; i++; }
    while(j<n2) { if(k==0||c[k-1]!=b[j]) c[k++]=b[j]; j++; }
    return k; // return size of merged array
}
int main() {
    int arr1[] = {1,3,5,7};
    int arr2[] = {2,3,6,7,8};
    int result[20], n;
    n = merge(arr1,4,arr2,5,result);
     printf("Merged array without duplicates:\n");
    for(int i=0;i<n;i++) printf("%d ", result[i]);
    return 0;
}