
//1^3 + 2^3 +3^3+ ....... + n^3

#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("1^3 + 2^3 +3^3+ ....... +%d",n);

    for(i=1; i<=n; i++)
    {
        sum= sum+i*i*i;
    }
    printf("= %d",sum);

    getch();
}

