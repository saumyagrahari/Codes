#include<stdio.h>
#include<math.h>
int main() {
    double principal, rate, time, compoundInterest;
    int n; // number of times interest is compounded per year

    // Input values
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    // Formula: A = P * (1 + r/n)^(n*t)
    compoundInterest = principal * pow((1 + (rate / 100) / n), n * time);

    printf("Compound Interest = %.2lf\n", compoundInterest - principal);
    printf("Total Amount = %.2lf\n", compoundInterest);

    return 0;
}