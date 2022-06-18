
// 2 + 4 + 6 + ...... + N (print even numbers)

#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("2 + 4 + 6 + ...... + %d ",n);

    for(i=2; i<=n; i=i+2)
    {
        sum= sum+i;
    }
    printf("= %d ",sum);

    getch();
}


