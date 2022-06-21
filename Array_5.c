
/*
    Array Declaration
    Array initialization
    Array Printing
    Getting input & output from user by loop
*/

//Write a program that 10 numbers and  display their sum and avarage

#include<stdio.h>
int main()
{

    int marks[100],i,sum=0,n;

    printf("How many numbers: ");
    scanf("%d",&n);

    printf("Enter your numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }

    for(i=0; i<n; i++)
    {
        sum= sum+marks[i];
    }
    printf("The sum is=%d\n",sum);
    printf("The Avarage is=%.2f\n",(float)sum/n);

    getch();
}

