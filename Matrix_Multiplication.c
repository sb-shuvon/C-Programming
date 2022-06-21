
// Matrix Multiplication

#include<stdio.h>
int main()
{
    int first[10][10], second[10][10], result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and cols first Matrix: ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and cols second Matrix: ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!!! Colum of first matrix not equal to row of second\n");

        printf("Enter rows and cols first Matrix: ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and cols second Matrix: ");
        scanf("%d %d",&r2,&c2);

    }

    // Taking input for first matrix
    printf("\nEnter elements for first Matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d]= ",i,j);
            scanf("%d",&first[i][j]);
        }

    }

    // Taking input for second matrix
    printf("\nEnter elements for second Matrix:\n");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d]= ",i,j);
            scanf("%d",&second[i][j]);
        }

    }


    //Multiplying matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2jh; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum= sum + first[i][k] * second[k][j];
            }
            result[i][j]=sum;
            sum= 0;
        }
    }


    // Printing first matrix
    printf("\n\nFirst Matrix\n");
    for(i=0; i<r1; i++)
    {
        printf("\t\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");

    }

    // Printing second matrix
    printf("\n\nSecond Matrix\n");
    for(i=0; i<r2; i++)
    {
        printf("\t\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");

    }

    // Printing result matrix
    printf("\n\nResult Matrix\n");
    for(i=0; i<r1; i++)
    {
        printf("\t\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");

    }



    getch();
}
