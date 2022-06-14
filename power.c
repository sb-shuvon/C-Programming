//power in c-programming using library funtion

#include<stdio.h>
int main()
{
    int x,y;
    double result;

    printf("Enter x : ");
    scanf("%d",&x);

    printf("Enter y : ");
    scanf("%d",&y);

    result = pow(x,y);
    printf("Power= %.2lf",result);


    getch();
}
