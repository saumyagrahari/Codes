#include <stdio.h>
void decimal_to_binary(int n) {
    int i;
    for (i = sizeof(n); i >= 0; i--) {
        (n & (1 << i)) ? printf("1") : printf("0");
    }}
int main(){
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary representation: ");
    decimal_to_binary(num);
    return 0;
}