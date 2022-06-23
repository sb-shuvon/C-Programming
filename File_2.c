

// File - writing to file using fputc()

#include<stdio.h>
int main()
{
    FILE *file;

    char name[20] ="Nilima amr bou";
    int length,i;
    length = strlen(name);

    file = fopen("test1.txt","a");

    if(file==NULL)
    {
        printf("File does't exist");
    }
    else
    {
        printf("File is openend\n");

        for(i=0; i<length; i++)
        {
            fputc(name[i],file);
        }
        printf("File is writen succesfully\n");

        fclose(file);
    }



    getch();
}
