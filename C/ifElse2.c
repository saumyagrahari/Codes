#include<stdio.h>
#include<conio.h>
int main(){
    int m,p,c;
    printf("enter the marks of maths, chemistry and physics\n");
    scanf("%d %d %d",&m, &p, &c);
    int total=m+p+c;
    int totmp=m+p;
    if(m>=65&&p>=55&&c>=50&&total>=190){
    printf("Candidate is eligible.");}
    else if(totmp>=140){
    printf("Candidate is eligible.");}
    else{
    printf("Candidate isn't eligible.");}
    return 0;
}