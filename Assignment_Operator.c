
// Assignment Operator in c-program

#include<stdio.h>
int main()
{

    int a,b,c,d,Reminder;

    printf("Enter a: ");
    scanf("%d",&a);

    a+=3;
    printf("a= %d\n",a);
    printf("\n");

    printf("Enter b: ");
    scanf("%d",&b);

    b-=3;
    printf("b= %d\n",b);
    printf("\n");

    printf("Enter c: ");
    scanf("%d",&a);

    c*=3;
    printf("c= %d\n",c);
    printf("\n");

    printf("Enter d: ");
    scanf("%d",&a);

    d/=3;
    printf("d= %d\n",d);
    printf("\n");

    printf("Enter a: ");
    scanf("%d",&a);

    Reminder%=3;
    printf("Reminder= %d\n",Reminder);
    printf("\n");


    getch();
}
