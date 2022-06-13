#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum = num1+ num2 + num3;
    avg = (float)sum/3;

    printf("Sum= %d\n",sum);
    printf("Avarage= %.2f\n",avg);


    getch();
}
