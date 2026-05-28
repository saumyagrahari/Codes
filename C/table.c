#include<stdio.h>
int main(){
    int k,i,table;
    printf("which table you want:\n");
    scanf("%d",&k);
    for(i=2; i<=10; i++){
    table=k*i;
    printf("%d\n",table);}
    return 0;
}