#include<stdio.h>
#include<conio.h>
int bitmax(int a, int b){
// (a-b)>>31 gives -1 else 0
return a - ((a - b) & ((a - b) >> 31));
}
int main(){
    int a,b,c,d;
    printf("Enter four numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int max1= bitmax(a,b);
    int max2= bitmax(max1,c);
    int max3= bitmax(max2,d);
    printf("greatest number is:%d\n",max3);
    return 0;
}
//return a-((a-b)&((a-b)>>31));
// return a-((a-b)&((a-b)>>31));