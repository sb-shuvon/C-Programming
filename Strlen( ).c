
//Finding length of String without strlen() function

#include<stdio.h>
int main()
{
    char s1[]="Nilima Tasnim Bappi";

    int i=0,len=0;

    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Lenght = %d\n",len);

    getch();
}

