

//2D array input from user
// Matrix Addition & Substraction

#include<stdio.h>
int main()
{
    //Scanning A Matrix


    int i,j,numberOfRows,numberOfCols;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter the numberOfRows & numberOfCols: ");
    scanf("%d %d",&numberOfRows,&numberOfCols);

    printf("Enter Elements for A Matrix:\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");

    }

     //Scanning B Matrix

    printf("\n\nEnter Elements for B Matrix:\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");

    }

    //Printing A Matrix
    printf("A=");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");

    }

    //Printing B Matrix
    printf("\nB=");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");

    }

    //Adding the Matrix
    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
            C[i][j] = A[i][j] + B[i] [j];
        }

    }

    //Printing A+B Matrix
    printf("\nA + B=");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");

    }


    getch();
}

