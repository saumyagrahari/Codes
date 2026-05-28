#include<stdio.h>
#include<math.h>
int main() {
    int a, b;
    printf("enter two number to be swapped");
    scanf("%d%d",&a,&b);
        // Swap using comma operator in a single statement
    a = a + b, b = a - b, a = a - b;
    printf("After comma operator swap: a = %d, b = %d\n", a, b);
    // Swap using bitwise XOR operator
    a = a ^ b ^ (b = a);
    printf("After bitwise XOR swap: a = %d, b = %d\n", a, b);
    return 0;
}