

// log10 calculate in c-program

#include<stdio.h>
int main()
{
    double x,result;

    printf("Enter x: ");
    scanf("%lf",&x);

    result = log10(x);
    printf("Log10 = %.2lf",result);

    getch();
}
