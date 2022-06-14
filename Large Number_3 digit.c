
//Write a program that read 3 numbers and display maximus

#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
        printf("Large number: %d",num1);

    else if(num2>num1 && num2>num3)
        printf("Large number: %d",num2);

    else if(num3>num1 && num3>num2)
        printf("Lager number: %d",num3);

    else
        printf("Numbers are equal");

    getch();
}
