#include<stdio.h>
#include<string.h>
int main(){
    int n, p,c,a,tot;
    char name;
    float per;
    printf("Input rollno:\n");
    scanf("%d",&n);
    printf("input name:\n");
    scanf("%s",&name);
    printf("input marks:\n");
    scanf("%d %d %d",&p,&c,&a);
    tot=p+c+a;
    per=(tot/3);
    printf("Roll No:%d\n",n);
    printf("Name of Student:%c\n",name);
    printf("Marks in Physics:%d\n",p);
    printf("Marks in Chemistry:%d\n",c);
    printf("Marks in Computer Applications:%d\n",a);
    printf("Total Marks=%d\n",tot);
    printf("Percentage=%f\n",per);
    if(per>=80){
        printf("Division=First\n");}
        else{
            printf("Division=Second\n");
        }
        return 0;
}