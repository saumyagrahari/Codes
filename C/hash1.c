#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<limits.h>
int main(){
    //hash array
    int arr[11]={1,4,1,2,3,1,6,7,2,2,4};
    int i,j;
    int hash[11]={0,0,0,0,0,0,0,0,0,0,0};
    for(i=0;i<11;i++){
        int ele=arr[i];
        hash[ele]++;
    }
    for(int i=0;i<11;i++){
        printf("%d ",hash[i]);
    }
    printf("\n");
    int max = INT_MIN;
    for(int i=0;i<11;i++){
        if(max < hash[i]){
            max = hash[i];
        }
    }
    printf(" max is : %d",max);
}