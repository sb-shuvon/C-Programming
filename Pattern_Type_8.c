// Pattern

/*
    1. Number right angle triangle
    Pattern 1
    -----------
    N1=5
    1
    2 4
    3 6 9
    4 8 16 20
*/

#include<stdio.h>
int main()
{
    int n,col,row;

    printf("Enter N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1;col<=row; col++)
        {
            printf("%d ",col*row);
        }
        printf("\n");
    }


    getch();
}
