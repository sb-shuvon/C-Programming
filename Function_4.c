
// Function- Square of a number

int square(int a)
{
    return a*a;
}

#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter any integer number: ");
    scanf("%d",&num);

    result = square(num);
    printf("The squre is= %d",result);



    getch();
}
