
//

#include<stdio.h>

void sum (int a, int b,int c)
{
    printf("The SUM is %d\n",a+b+c);
}

void sub (int a, int b)
{
    printf("The SUB is %d\n",a-b);
}

void mul (int a, int b)
{
    printf("The MUL is %d\n",a*b);
}

void div (int a, int b)
{
    printf("The DIV is %d\n",a/b);
}
int main()
{

    sum(5,6,7);
    sum(5,9,7);
    sub(30,10);
    mul(30,10);
    div(30,10);


    getch();
}


