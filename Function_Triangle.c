
// Function- Area of Triangle

#include<stdio.h>

float triangleDisplay (float b, float h)
{
    return 0.5*b*h;
}

int main()
{
    float base,height,area;

    printf("Area of Triangle\n");

    printf("Enter base: ");
    scanf("%f",&base);

    printf("Enter height: ");
    scanf("%f",&height);

    area = triangleDisplay( base, height);

    printf("Area of Triangle: %.2f\n",area);




    getch();
}
