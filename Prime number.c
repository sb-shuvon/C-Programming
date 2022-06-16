
//Enter a number to check Prime number

#include<stdio.h>
int main()
{
    int num,i,count=0;

    printf("Enter any positive number: ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }

    }

    if(count==0)
        printf("Number are Prime number");
    else
        printf("Not a Prime number");

    getch();
}
