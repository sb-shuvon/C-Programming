
// 2 + 4 + 6 + ...... + N=?    (using while loop)

#include<stdio.h>
int main()
{
    int n,sum=0,a=2;

    printf("Enter the last value of series: ");
    scanf("%d",&n);

    printf("2 + 4 + 6...... + %d",n);

    while(a<=n)
    {
        sum= sum+a;
        a= a+2;
    }
    printf("=%d",sum);
    getch();
}
