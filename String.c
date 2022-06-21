
// String declare,initialize,printing

#include<stdio.h>
int main()
{

    char s1[7];

    s1[0]='N';
    s1[1]='i';
    s1[2]='l';
    s1[3]='i';
    s1[4]='m';
    s1[5]='a';
    s1[6]='\0';

    printf("s1= %s\n\n",s1);

    char s2[]= { 'T','a','s','n','i','m', '\0'};

    printf("s2= %s\n\n",s2);

    char s3[]= "Nilima Tasnim Bappi";
    printf("s3= %s",s3);


    getch();
}
