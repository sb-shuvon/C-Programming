
// Reading a file using fgets()

#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];

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
            fgets(ch,50,file);
            printf("%s\n",ch);
        }

        fclose(file);

    }



    getch();
}


