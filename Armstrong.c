
//a given number is Armstrong or not?

#include<stdio.h>
int main()
{
    int initialNum,finalNum,i,temp,r,sum=0;

    printf("Enter initialNumber: ");
    scanf("%d",&initialNum);

    printf("Enter Final Number: ");
    scanf("%d",&finalNum);

    for(i=initialNum; i<=finalNum; i++)
    {
        temp=i;

        while(temp!=0)
        {
            r= temp%10;
            sum= sum+r*r*r;
            temp= temp/10;
        }


        if(i==sum)
        {
            printf("%d ",i);
        }
        sum=0;

    }



    getch();
}
