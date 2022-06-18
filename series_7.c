
// 3 + 6 + 9 + ...... + N

#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("3 + 6 + 9 + ...... + %d ",n);

    for(i=3; i<=n; i=i+3)
    {
        sum= sum+i;
    }
    printf("= %d ",sum);

    getch();
}



