
// sum of diagonal elements for matrix
// sum of upper and lower triangle

#include<stdio.h>
int main()
{
    int i,j,sum=0,upperSum=0,lowerSum=0;
    int A[3][3];

    //getting the elements for the matrix
    printf("\nEnter the elements for the matrix: \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //pringting matrix
    printf("\nEntered Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
;        printf("\n");
    }

    //sum of diagonal elements
    printf("\nDiagonal elements: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum= sum+A[i][j];
            }

        }
    }

    //sum of upper and lower triangle elements
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                 upperSum= upperSum + A[i][j];
            }
            if(i>j)
            {
                 lowerSum= lowerSum + A[i][j];
            }

        }
    }

    printf("\n\nSum of diagonal elements: %d",sum);
    printf("\n\nSum of Upper Triangle elements: %d",upperSum);
    printf("\n\nSum of lower Triangle elements: %d",lowerSum);

    getch();
}
