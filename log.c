
// log calculate in c-program

#include<stdio.h>
int main()
{
    double x,result;

    printf("Enter x : ");
    scanf("%lf",&x);

    result = log(x);
    printf("Log= %.2lf",result);


    getch();
}
