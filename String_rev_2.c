
//reverse a string without strrev() function

#include<stdio.h>
int main()
{
    char str1[30]= "Nilima Tasnim Bappi";
    char str2[30];
    printf("Str1= %s\n",str1);

    int i=0,len=0,j;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    for(j=0, i=len-1; i>=0; i--, j++)
    {
        str2[j]= str1[i];
    }
    str2[j]='\0';


    printf("Str2= %s\n",str2);

    getch();
}

