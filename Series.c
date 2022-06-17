

// Series :- 1 + 2 + 3 + ....... +N =?

#include<stdio.h>
int main()
{
    int n,sum=0,i;

    printf("Enter the last value of series: ");
    scanf("%d",&n);

    printf("1 + 2 + 3 +..... %d",n);
    for(i=1; i<=n; i++)
    {
        sum= sum+i;
    }
    printf("= %d",sum);
    4


    getch();
}
