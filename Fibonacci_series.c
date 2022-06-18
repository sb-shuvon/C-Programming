
// Fibonacci series:20= 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181

#include<stdio.h>
int main()
{
    int n,first=0,second=1,count=0,fibo;

    printf("Enter Range: ");
    scanf("%d",&n);

    while(count<n)
    {
        if(count<=1)
        {
            fibo= count;
        }
        else
        {
            fibo= first+second;
            first= second;
            second= fibo;
        }
        printf("%d ",fibo);
        count ++;
    }



    getch();
}
