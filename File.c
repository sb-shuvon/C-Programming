
// File create,open & close

#include<stdio.h>
int main()
{
    FILE *file;

    file = fopen("test1.txt","w");

    if(file==NULL)
    {
        printf("File does't exist");
    }
    else
    {
        printf("File is open");
        fclose(file);
    }



    getch();
}
