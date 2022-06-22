
//base^exponent
//2^3 = 2*2*2 = 8
//2^4 = 2*2*2*2 = 16
//3^4 = 3*3*3*3 = 81

//program:- x to the power y without (not using)  Library function

#include<stdio.h>
int main()
{
    double base,exp,result=1,i;

    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter Exponant: ");
    scanf("%lf",&exp);

    for(i=1; i<=exp; i++)
    {
        result = result * base;
    }
    printf("X to th power Y: %.2lf",result);

    getch();
}

