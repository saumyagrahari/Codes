#include<stdio.h>
#include<math.h>
int main(){
    //side of square,circle,rectangle
    float side,area;
    int pi=3.14;
    printf("enter side\n");
    scanf("%f",&side);
    area=side*side;
    printf("area of square: %f\n",area);
    area=side*pi*side;
    printf("area of circle: %f\n",area);
    area=side*side;
    printf("area of rectangle: %f\n",area);
    return 0;
}