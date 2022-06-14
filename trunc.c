
// trunc() calculate in c-program

#include<stdio.h>
int main()
{
    double x,result;

    printf("Enter x: ");
    scanf("%lf",&x);

    result= trunc(x);
    printf("trunc = %.2lf\n",result);


    getch();
}



