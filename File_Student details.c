
// program:- File- Student Details

#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int num,i,age,phone_number;

    file = fopen("student.txt","a");

    if(file==NULL)
    {
        printf("File does't exist");
    }
    else
    {
        printf("File is opend\n");

        printf("Enter number of student: ");
        scanf("%d",&num);

        for(i=1; i<=num; i++)
        {
            printf("Enter student name : ");
            scanf("%s",&name);

            printf("Enter student age : ");
            scanf("%d",&age);

            printf("Enter student phone number : ");
            scanf("%d",&phone_number);

            fprintf(file,"\n%s\t\t%d\t%d\n",name,age,phone_number);
        }


        fclose(file);
    }



    getch();
}

