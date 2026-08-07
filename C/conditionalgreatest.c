//enter an four number and find the greatest from all;
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,d;
    int greatest;
    printf("enter number:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    greatest=a>b?a:b;
    greatest=greatest>c?greatest:c;
    greatest=greatest>d?greatest:d;

    
    printf("greatest number is:%d\n",greatest);
    return 0;
}