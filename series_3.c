
// 1*3*6 + 2*5*9 + 3*7*12 +......... + n1*n2

#include<stdio.h>
int main()
{
    int n1,n2,n3,sum=0,a=1,b=3,c=6;

    printf("Enter num1: ");
    scanf("%d",&n1);

    printf("Enter num2: ");
    scanf("%d",&n2);

    printf("Enter num3: ");
    scanf("%d",&n3);

    printf("1.3.6 + 2.5.9 + 3.7.12 ......... + %d.%d",n1,n2);

    while(a<=n1 && b<=n2)
    {
        sum= sum + a*b*c;
        a= a+1;
        b= b+2;
        c= c+3;
    }
    printf(" = %d",sum);

    getch();
}
