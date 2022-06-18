
//1.5 + 2.5 + 3.5 + ....... +n

#include<stdio.h>
int main()
{
    float n,i,sum=0;

    printf("Enter n: ");
    scanf("%f",&n);

    printf("1.5 + 2.5 + 3.5 + ....... +%.2f",n);

    for(i=1.5; i<=n; i++)
    {
        sum= sum+i;
    }
    printf("= %.2f",sum);

    getch();
}
