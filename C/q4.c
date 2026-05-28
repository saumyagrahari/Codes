#include<stdio.h>
int main(){
    int end=1;
    printf("Pattern using while:");
    int i=10;
    while(i>=end){
        printf("\n");
        int j=10;
        while(j>=i){
            printf("%d ",j);
            j=j-1;
        }
        i=i-1;
    }
    return 0;
}