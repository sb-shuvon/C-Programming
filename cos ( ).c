
// cos() calculate in c-program

#include<stdio.h>
int main()
{
    double x,result;

    printf("Enter x: ");
    scanf("%lf",&x);

    result= cos(x);
    printf("Cos = %.2lf\n",result);


    getch();
}
