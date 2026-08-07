#include<stdio.h>
int fact(int i){
    int f=0;
    if(i==1){
    return 1;
    }
    else{
    f=i*fact(i-1);
    }
    return f;
}
int main(){
    int i=9;
    int res = fact(i);
    printf("Value of Fact:%d.",res);
    return 0;
}