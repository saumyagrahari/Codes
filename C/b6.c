#include<stdio.h>
int main(){
    int i, j;
    for(i=0; i<=5;i++){
        int space;
        for(space=1; space<=5-i; space++){
            printf(" ");
        }
    }for(j=1;j<=i-1;j++){
        printf("*");
    }
    return 1;
}