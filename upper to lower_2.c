// uppercase to lowercase latter with using library function

#include<stdio.h>
int main()
{
    char upper,lower;

    printf("Enter any Uppercase latter: ");
    scanf("%c",&upper);

    upper = tolower(upper);
    printf("Lowercase number: %c",upper);


    getch();
}
