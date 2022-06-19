/*

    1. Floyd's Triangle
    --------------------
    N=5
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

*/

#include<stdio.h>
int main()
{
    int n1,row1,col1,count=0;

    printf("Enter N1= ");
    scanf("%d",&n1);

    for(row1=1; row1<=n1; row1++)
    {
        for(col1=1; col1<=row1; col1++)
        {
            printf("%d ", ++count);
        }
        printf("\n");
    }

    printf("\n\n");
    /*

    N=5
    ---------
      1
    1 2 3
  1 2 3 2 1
1 2 3 4 3 2 1

*/


    int n2,row2,col2;

    printf("Enter N2: ");
    scanf("%d",&n2);

    for(row2=1; row2<=n2; row2++)
    {

        for(col2=1; col2<=n2-row2; col2++)
            printf(" ");

        for(col2=1; col2<=row2; col2++)
            printf("%d",col2);
        for(col2=row2-1; col2>=1; col2--)
            printf("%d",col2);

        printf("\n");
    }


        printf("\n\n");
    /*

    N=5
    ---------
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 3
      1

*/


    int n3,row3,col3;

    printf("Enter N3: ");
    scanf("%d",&n3);


    for(row3=n3; row3>=1; row3--)
    {

        for(col3=1; col3<=n3-row3; col3++)
            printf(" ");

        for(col3=1; col3<=row3; col3++)
            printf("%d",col3);
        for(col3=row3-1; col3>=1; col3--)
            printf("%d",col3);

        printf("\n");
    }


           printf("\n\n");
    /*

    N=5
    ---------
      1
    1 2 3
  1 2 3 2 1
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 3
      1

*/


    int n4,row4,col4;

    printf("Enter N4: ");
    scanf("%d",&n4);

    for(row4=1; row4<=n4; row4++)
    {

        for(col4=1; col4<=n4-row4; col4++)
            printf(" ");

        for(col4=1; col4<=row4; col4++)
            printf("%d",col4);
        for(col4=row4-1; col4>=1; col4--)
            printf("%d",col4);

        printf("\n");
    }

    for(row4=n4-1; row4>=1; row4--)
    {

        for(col4=1; col4<=n4-row4; col4++)
            printf(" ");

        for(col4=1; col4<=row4; col4++)
            printf("%d",col4);
        for(col4=row4-1; col4>=1; col4--)
            printf("%d",col4);

        printf("\n");
    }


    getch();
}


