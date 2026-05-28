#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    char ch = 'A';
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print alphabets
        /*for (int k = 0; k <= i; k++) {
            printf("%c ", ch);
            ch++;*/
                for(int j=1;j<=i;j++) printf("%ch",j);
                for(int j=i-1;j>=1;j--) printf("%ch",j);
       
            if (ch > 'Z') {
                ch = 'A';
            }
        

        printf("\n");
}

    return 0;
}