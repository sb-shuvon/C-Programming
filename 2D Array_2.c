

//2D array input from user

#include<stdio.h>
int main()
{
    //input
     int A[3][4],i,j;

     for(i=0; i<3; i++)
     {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");

     }
     //printing
     for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");

    }


    getch();
}
