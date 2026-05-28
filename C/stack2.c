#include<stdio.h>
int rawMan(int n){
    // printf("%d",n);
    int a=n+10;
    if(a==40)
    return 0;
    printf("%d\n",a);
    rawMan(a);
    // printf("%d",a);
    }
int main(){
    int a=10;
    printf("%d\n",a);
    // n++;
    rawMan(a);
    a+=10;
    // int a;
    // for(int i=2;i<=i-1;i--)
    printf("%d\n",a);
    a-=10;
    printf("%d",a);
}