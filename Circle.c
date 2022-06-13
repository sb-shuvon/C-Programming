//circle area calculate


#include<stdio.h>
int main()
{
    float radius,area,PI=3.1416;

    printf("Enter radius: ");
    scanf("%f",&radius);

    area =  PI* radius * radius;
    printf("Circle are: %.2f",area);


    getch();
}
