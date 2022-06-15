/*

    Control Statement
        Loop:
            1.For Loop
            2.While Lopp
            3. do-while Loop

*/

#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<=5; i++) //Initialization & Condition
    {
        printf("I Love Nilima\n");
    }
    printf("\n");

    int j=1; //Initialization
    while(j<=5) //Condition
    {
        printf("I Love you Tasnim\n");
        j++; //Increment
    }

    printf("\n");

    int k=1; //Initialization
    do
    {
        printf("I Love you Bappi\n");
        k++; //Increment
    }while(j<=5); //Condition

    getch();
}
