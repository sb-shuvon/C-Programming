
// 1 X 2 X 3 X ... X n

#include<stdio.h>
int main()
{
    int n,i,result=1;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("1 X 2 X 3 X ... X %d",n);

    for(i=1; i<=n; i++)
    {
        result= result*i;
    }
    printf("= %d",result);

    getch();
}
