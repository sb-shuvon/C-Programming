
//Strong number

#include<stdio.h>
int main()
{
    int num,temp,sum=0,i,fact,rem;

    printf("Enter an integer number: ");
    scanf("%d",&num);

    temp= num;

    while(temp!=0)
    {
        rem= temp%10;

        fact= 0;
        for(i=1; i<=rem; i++)
        {
            fact= fact*i;
        }

        sum= sum + fact;
        temp= temp/10;
    }
    if(sum==num)
        printf("%d Strong number",num);
    else
        printf("%d is not a Strong number",num);


    getch();
}
