
// Reading a file using fgetc

#include<stdio.h>
int main()
{
    FILE *file;
    char ch;

    file = fopen("test2.txt","r");

    if(file==NULL)
    {
        printf("File does't exist");
    }
    else
    {
        printf("File is opend\n");

        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }

        fclose(file);
    }



    getch();
}

