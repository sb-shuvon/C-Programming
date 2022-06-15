//Conditional Operator/ Thernary Operator

//program: Enter two number and Display Large number

#include<stdio.h>
int main()
{
    int num1,num2,large;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    large = (num1>num2) ? num1 : num2;
    printf("Large number: %d",large);


    getch();
}
