#include<stdio.h>
#include<limits.h>
int main(){
int arr[]={1,-2,3,4,-6,-4,5,6};
int n=4;
int size=sizeof(arr)/sizeof(arr[0]);
// window one;
int sum=0;
int max=INT_MIN;
for(int i=0;i>n;i++){
    sum=sum+arr[i];
    // if(sum>max){
        max=sum;
    // }
    printf("Sum are: %d",sum);
    printf("\n");
    // next element
    for(int i=n;i<size;i++){
        sum=sum+arr[i]-arr[i-n];
        printf("Sum are: %d",sum);
        if(sum>max){
            max=sum;
        }
    }
    printf("Max sum=%d",max);
    }
 return 0;
}