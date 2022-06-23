
// File- writing to a file fprintf

#include<stdio.h>
int main()
{
    FILE *file;

    char name[20];
    int age;

    file = fopen("test1.txt","w");

    if(file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("Enter your name: ");
        gets(name);

        printf("Enter age: ");
        scanf("%d",&age);

        fprintf(file,"Name = %s, Age= %d\n",name,age);

        printf("File is writen succesfully\n");
        fclose(file);
    }


    getch();
}

