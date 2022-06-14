
// exp () calculate in c-program

#include<stdio.h>
int main()
{
    double x, result;

    printf("Enter x: ");
    scanf("%lf",&x);

    result= exp(x);
    printf("Exp= %.2lf",result);


    getch();
}

