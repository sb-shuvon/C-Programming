
// Enter a number to check Pass or Fail

#include<stdio.h>
int main()
{
    float marks;

    printf("Enter your marks: ");
    scanf("%f",&marks);

    if(marks>=33 && marks<=100)
        printf("Passed");
    else
        printf("Faield");


    getch();
}

