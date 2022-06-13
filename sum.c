// write a program that input 2 intege and make sum and avarage

#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;

    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    printf("Sum = %d\n",sum);

    avg= (float)sum/2;
    printf("Avarage: %.2f",avg);


    getch();
}
