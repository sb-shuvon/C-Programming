/*
    Ractangle star pattern

    N=5
    -----
    *****
    *   *
    *   *
    *   *
    *****
*/

#include<stdio.h>
int main()
{
    int n1,row1,col1;

    printf("Enter N= ");
    scanf("%d",&n1);

    for(row1=1; row1<=n1; row1++)
    {
        for(col1=1; col1<=n1; col1++)
        {
            if(row1==1 || row1==n1 || col1==1 || col1==n1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");

    /*
    Triangle star pattern

    N=5
    -----
    *
    **
    * *
    *  *
    *****
*/

    int n2,row2,col2;

    printf("Enter N2: ");
    scanf("%d",&n2);

    for(row2=1; row2<=n2; row2++)
    {
        for(col2=1; col2<=n2; col2++)
        {
            if(col2==1 || row2==n2 || col2==row2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


        printf("\n\n");

    /*
    X star pattern

    N=5
    -----
    *    *
     *  *
      *
     *  *
    *    *
*/

    int n3,row3,col3;

    printf("Enter N3= ");
    scanf("%d",&n3);

    for(row3=1; row3<=n3; row3++)
    {
        for(col3=1; col3<=n3; col3++)
        {
            if(row3==col3 || row3+col3==n3+1)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }




    getch();
}
