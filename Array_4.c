
/*
    Array Declaration
    Array initialization
    Array Printing
    Getting input from user
*/

#include<stdio.h>
int main()
{

    int marks[5],i,sum=0;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);

    for(i=0; i<5; i++)
    {
        sum= sum+marks[i];
    }
    printf("The sum is=%d\n",sum);
    printf("The Avarage is=%.2f\n",(float)sum/5);

    getch();
}
