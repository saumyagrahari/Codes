#include<stdio.h>
int main()
{
    int num;
    int d1, d2, d3, d4;
    int sumFirstTwo, sumLastTwo, difference;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    // Extract digits
    d1 = num / 1000;            // thousands place
    d2 = (num / 100) % 10;      // hundreds place
    d3 = (num / 10) % 10;       // tens place
    d4 = num % 10;              // ones place
    // Calculate sums
    sumFirstTwo = d1 + d2;
    sumLastTwo = d3 + d4;
    // Find difference
    difference = sumFirstTwo - sumLastTwo;
    printf("Difference = %d\n", difference);
    return 0;
}