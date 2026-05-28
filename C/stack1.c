#include<stdio.h>
int doSome(int n){
    int a=10+n;
    if(n==50)
    return 0;
     printf("%d\n",a);
     doSome(a);
}
int main(){
    int a=10;
    printf("%d\n",a);
    doSome(10);
}