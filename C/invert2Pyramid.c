#include<stdio.h>
int main() {
    int n=5;
    for(int i=n;i>=1;i--){                 // upper half
        for(int s=0;s<n-i;s++) printf(" ");
        for(int j=1;j<=i;j++) printf("%d",j);
        for(int j=i-1;j>=1;j--) printf("%d",j);
        printf("\n");
    }
    for(int i=2;i<=n;i++){                 // lower half
        for(int s=0;s<n-i;s++) printf(" ");
        for(int j=1;j<=i;j++) printf("%d",j);
        for(int j=i-1;j>=1;j--) printf("%d",j);
        printf("\n");
    }
}