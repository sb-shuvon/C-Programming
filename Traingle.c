//write a program that calculates the area of triangle

#include<stdio.h>
int main()
{
    float base,height,area;

    printf("Enter Base: ");
    scanf("%f",&base);

    printf("Enter height: ");
    scanf("%f",&height);

    area= 0.5 * base * height;

    printf("Triangle of area: %.2f\n",area);


    getch();
}
