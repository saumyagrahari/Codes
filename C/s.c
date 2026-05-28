#include<stdio.h>
int main() {
    int n=5;
    int i,j;
    int arr[i];
    for(i=0;i<n-1;i--){
        int ele=arr[i];
        int count=0;
        // for(int s=0;s<n-i;s++) printf(" ");
        for(int j=0;j<n-1;j++){
            if(ele ==arr[i]){
                count++;
            }
          printf("%d%d",ele,count);
        // for(int j=i-1;j>=1;j--) printf("*");
        // printf("\n");
    }}
    return 0;
}