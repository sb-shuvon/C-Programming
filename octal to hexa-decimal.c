// convert between octal number to hexa-decimal number

#include<stdio.h>
int main()
{
    int number;

    printf("Enter Octal number: ");
    scanf("%o",&number);

    printf("Hexa-decimal number= %x",number);


    getch();
}
