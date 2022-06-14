
// sin () calculate in c-program

#include<stdio.h>
int main()
{
    double x,result;

    printf("Enter x: ");
    scanf("%lf",&x);

    result= sin(x);
    printf("Sin= %.2lf\n",result);


    getch();
}

