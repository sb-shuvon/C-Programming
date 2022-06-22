
//base^exponent
//2^3 = 2*2*2 = 8
//2^4 = 2*2*2*2 = 16
//3^4 = 3*3*3*3 = 81

//program:- x to the power y without (not using)  Library function (User-defind)

#include<stdio.h>

double powerDisplay(double b, double e)
{
    double result=1,i;
    for(i=1; i<=e; i++)
    {
        result = result * b;
    }
    printf("X to th power Y: %.2lf\n\n",result);
}

int main()
{
    double base,exp,power;

    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter Exponant: ");
    scanf("%lf",&exp);

    powerDisplay(base,exp);

    powerDisplay(3,4);
    powerDisplay(2,3);
    powerDisplay(3,2);
    powerDisplay(2,2);



    getch();
}

