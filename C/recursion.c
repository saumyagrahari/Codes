#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,fact=1;
    printf("Enter n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }printf("Value is %d.",fact);
}