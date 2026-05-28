#include <stdio.h>
int main() {
    int n;
    printf("enter the number of rows: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=1;s<i;s++) printf(" ");
        for(int j=1;j<=2*(n-i)+1;j++)
            printf(j==1||j==2*(n-i)+1 ? "*" : " ", i);
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int s=1;s<i;s++) printf(" ");
        for(int j=1;j<=2*(n-i)+1;j++)
            printf(j==1||j==2*(n-i)+1 ? "*" : " ", i);
        printf("\n");
    }
}