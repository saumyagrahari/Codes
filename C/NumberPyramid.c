#include<stdio.h>
int main() {
    int n;
    printf("enter a rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++) printf(" ");
        for(int j=1;j<=i;j++) printf("%d",j);
        for(int j=i-1;j>=1;j--) printf("%d",j);
        printf("\n");
    }
   printf("%d",n);
    return 0;
}