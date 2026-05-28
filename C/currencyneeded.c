#include <stdio.h>
int main() {
    int amt;
    printf("Enter amount: ");
    scanf("%d", &amt);
    printf("500: %d\n", amt/500); amt%=500;
    printf("200: %d\n", amt/200); amt%=200;
    printf("100: %d\n", amt/100); amt%=100;
    printf("50 : %d\n", amt/50);  amt%=50;
    printf("20 : %d\n", amt/20);  amt%=20;
    printf("10 : %d\n", amt/10);  amt%=10;
    printf("5  : %d\n", amt/5);   amt%=5;
    printf("2  : %d\n", amt/2);   amt%=2;
    printf("1  : %d\n", amt);
    return 0;
}