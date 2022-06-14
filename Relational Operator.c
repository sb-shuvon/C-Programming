
/*
    1. Relationa Operator in C-Program
    2. Control Statement
        1.Conditional Control Statement
            1.if-else
            2.switch
        2.Loop Control Statement
            1.for
            2.while
            3.do-while
*/


//using if statement
#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%2==0)
        {
          printf("Even");
        }
    if(num%2!=0)
        printf("Odd");


    getch();
}
