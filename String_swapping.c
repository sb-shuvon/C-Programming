
//String swapping

#include<stdio.h>
int main()
{
    char str1[15]= "Nilima Tasnim ";
    char str2[15]= "Bappi";
    char temp[15];

    //Before swapping
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    //After swapping
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);


    getch();
}
