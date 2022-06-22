

// Passing array to function

#include<stdio.h>

int passingDisplay(int x[])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ",x[i]);
    }
}

int main()
{

    int num[]={25,35,40,45,57};
    passingDisplay(num);


    getch();
}
