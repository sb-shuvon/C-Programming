
// swapping 2 numbers without temporary variable

#include<stdio.h>
int main()
{
    int num1,num2;

    num1=10;
    num2=20;

    printf("After Swapping\n");
    printf("num1 = %d\n",num1);
    printf("num2 = %d\n\n",num2);

    num1= num1 - num2;
    num2= num1 + num2;
    num1= num2 - num1;

    printf("Before Swapping\n");
    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);


    getch();
}
