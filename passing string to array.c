
// passing string to a array

#include<stdio.h>

void display(char s1[])
{
    int i;
    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }
}

int main()
{
    char str[]= "Nilima";
    display(str);


    getch();
}
