
// Concat string using with strcat() function

#include<stdio.h>
int main()
{
    char str1[]= "My Wife name is ";
    char str2[]= "Nilima Tasnim Bappi";

    strcat(str1,str2);

    printf("Str1= %s\n",str1);
    printf("Str2= %s\n",str2);

    getch();
}
