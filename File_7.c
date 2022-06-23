
// Reading a file using fscanf()

#include<stdio.h>
int main()
{
    FILE *file;
    char fname[30];
    char lname[30];
    int age;

    file = fopen("test2.txt","r");

    if(file==NULL)
    {
        printf("File does't exist");
    }
    else
    {
        printf("File is opend\n");

        fscanf(file,"%s %s %d",&fname,&lname,&age);
        printf("%s\t %s\t %d\t\n ",fname,lname,age);


        fclose(file);

    }



    getch();
}



