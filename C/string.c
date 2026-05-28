#include<stdio.h>
#include<string.h>
char str[100];
int len=0;
int main(){
    printf("enter the string:");
    scanf("%s",&str[100]);
    //length
    for(int i=0;str[i]!='\0';i++)
    len++;
    printf("length of string is:%d\n",len);
    //reverseofstring
    int i=0, j=len-1;
    char temp;
    temp =str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
    printf("Reverse is:");
    i=0;
    while(str[i] !='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    //copy
    char dest[100];
    i=0;
    while (str[i]!='\0'){
        dest[i]=str[i];
        i++;
    }
    dest[i]='\0';
    printf("copied string:%s\n", dest);
    return 0;
}