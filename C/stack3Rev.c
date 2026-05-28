#include<stdio.h>
int revNum(int a){
    // printf("Reversed number is:");
    int r=0;
    r=a%10;
    a=a/10;
    printf("%d",r);
    if(a==0)
    return 0;
    revNum(a);
}
int main(){
    int a=1483;
    printf("Current number is: %d\n",a);
    printf("Reversed number is: ");
    revNum(a);
    // printf("Current number is: %d\n",a);
    }