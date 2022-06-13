// lower to upper with using library funtion

#include<stdio.h>
int main()
{
    char lower,upper;

    printf("Enter any lowercase latter:");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("Uppercase latter= %c",upper);


    getch();
}
