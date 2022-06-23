
//writing to a file fputs()

#include<stdio.h>
int main()
{
    FILE *file;

    char name[20];

    file = fopen("test1.txt","w");

    if(file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opend\n");
        printf("Enter your Wife name: ");
        gets(name);

        fputs(name,file);
        fputs("\n",file);
        printf("File is writen succesfully\n");
        fclose(file);
    }


    getch();
}
