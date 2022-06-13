//Write a programm that input 2 integer and make sum,sub,mul,div,reminder

#include<stdio.h>
int main()
{
    int num1,num2,result;

    printf("Enter two integer: ");
    scanf("%d %d",&num1, &num2);

    result = num1 + num2;
    printf("Sum = %d + %d = %d\n ",num1,num2,result);

    result = num1 - num2;
    printf("Sub = %d - %d = %d\n ",num1,num2,result);

    result = num1 * num2;
    printf("Mul = %d * %d = %d\n ",num1,num2,result);

    result = num1 / num2;
    printf("Div = %d / %d = %d\n ",num1,num2,result);

    result = num1 % num2;
    printf("Reminder = %d\n",result);


    getch();
}
