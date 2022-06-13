#include<stdio.h>
int main()
{
    float a,b,c,s,area;

    printf("Enter 3 value of Triangle: ");
    scanf("%f %f %f",&a,&b,&c);

    s = a+b+c/2;
    area = sqrt ((s-a)*(s-b)*(s-c));

    printf("Triangle area are: %.2f\n",area);


    getch();
}
