// sqrt in c-program

#include<stdio.h>
int main()
{

    double result;

    printf("Enter any number: ");
    scanf("%lf",&result);

    result = sqrt(25);
    printf("Sqrt = %.2lf",result);

    getch();
}
