
// Concat string without strcat() function

#include<stdio.h>
int main()
{
    char str1[50]= "My Wife name is ";
    char str2[]= "Nilima Tasnim Bappi";

    int i=0,len=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    while(str2[j]!='\0')
    {
        str1[len+j] = str2[j];
        j++;
    }


    printf("Str1= %s\n",str1);
    printf("Str2= %s\n",str2);

    getch();
}

