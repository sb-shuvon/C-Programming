
// tan() calculate in c-program

#include<stdio.h>
int main()
{
    double x,result;

    printf("Enter x: ");
    scanf("%lf",&x);

    result= tan(x);
    printf("tan = %.2lf\n",result);


    getch();
}

