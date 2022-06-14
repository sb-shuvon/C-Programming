
// Enter a letter to check Capital or Small letter

#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any letter: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("Small letter: %c",ch);

    else if(ch>='A' && ch<='Z')
        printf("Capital letter: %c",ch);

    else
        printf("Not a letter");


  getch();
}
