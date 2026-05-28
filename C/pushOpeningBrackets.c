// push opening brackets
// match the closing brackets with top
#include <stdio.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top =-1;
void push(char c){
    stack[++top]=c;
}
char pop(){
    return stack[top--];
}
int isMatching(char a, char b){
    return (a=='(' && b==')') ||
    (a=='{' && b=='}') ||
    (a=='[' && b==']');
}
int main(){
            char exp[]="{[()]}";
            for(int i=0;i<strlen(exp);i++){
                char ch=exp[i];
                if(ch=='(' || ch=='{' || ch=='[')
                push (ch);
                else{
                    if(top==-1|| !isMatching(pop(),ch)){
                        printf("Not balanced\n");
                    }
                }
            }
            if(top==-1)
            printf("Balanced\n");
            else
            printf("Not Balanced.\n");
            return 0;
}