//C program to determine if a number is positive or nagative

#include<stdio.h>
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d",&num);

    if(num>0)
        printf("Number are Positive");
    else if(num<0)
        printf("Number are Nagative");
    else
        printf("Number is Zero");


    getch();
}
