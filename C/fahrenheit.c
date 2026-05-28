#include<stdio.h>
#include<math.h>
int main()
{
    float fahrenheit,celcius;
    int choice;
    printf("temp conversion program\n");
    printf("1.celcius to fahrenheit");
    printf("2.fahrenheit to celcius");
    printf("enterchoice 1 or 2\n");
    scanf("%d", &choice);
    if(choice==1){
        printf("in celcius");
        scanf("%f",&celcius);
        fahrenheit=(celcius*9/5)+32;
        printf("%.2f celcius = %.2f fahrenheit\n");celcius,fahrenheit;
    }
    else if(choice==2){
        printf("in fahrenheit");
        scanf("%.2f",&fahrenheit);
        celcius=(fahrenheit-32)*5/9;
        printf("%.2f fahrenheit = %.2f celcius\n");fahrenheit,celcius;
    }
    else{
        printf("invalid choice");
    }return 0;
}