
//Comparing string using strcmp() function

#include<stdio.h>
int main()
{
    char str1[]= "Nilima Tasnim Bappi";
    char str2[]= "Nilima Tasnim bappi";


    int d=strcmp(str1,str2);

    if(d==0)
    {
       printf("String are equal");
    }
    else
        printf("String are not equal");

    getch();
}
