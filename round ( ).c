
// round() calculate in c-program

#include<stdio.h>
int main()
{
    double x,result;

    printf("Enter x: ");
    scanf("%lf",&x);

    result= round(x);
    printf("round = %.2lf\n",result);


    getch();
}


