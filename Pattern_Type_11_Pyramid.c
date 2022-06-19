// Pattern

/*
    1. Number right angle triangle
    Pattern 1
    -----------
    N1=3
      1
     123
    12345
     123
      1
*/

#include<stdio.h>
int main()
{
    int n1,row1,col1;

    printf("Enter N1= ");
    scanf("%d",&n1);

    for(row1=1; row1<=n1; row1++)
    {

        for(col1=1; col1<=n1-row1; col1++)
        {
            printf(" ");
        }

        for(col1=1; col1<=2*row1-1; col1++)
        {
            printf("%d",col1);
        }
        printf("\n");
    }

    for(row1=n1-1; row1>=1; row1--)
    {

        for(col1=1; col1<=n1-row1; col1++)
        {
            printf(" ");
        }

        for(col1=1; col1<=2*row1-1; col1++)
        {
            printf("%d",col1);
        }
        printf("\n");
    }

    printf("\n\n");
/*
    Pattern 2
    ------------
    N2=3
      1
     222
    33333
     222
      1
*/
    int n2,row2,col2;

    printf("Enter N2= ");
    scanf("%d",&n2);

    for(row2=1; row2<=n2; row2++)
    {

        for(col2=1; col2<=n2-row2; col2++)
        {
            printf(" ");
        }

        for(col2=1; col2<=2*row2-1; col2++)
        {
            printf("%d",row2);
        }
        printf("\n");
    }

    for(row2=n2-1; row2>=1; row2--)
    {

        for(col2=1; col2<=n2-row2; col2++)
        {
            printf(" ");
        }

        for(col2=1; col2<=2*row2-1; col2++)
        {
            printf("%d",row2);
        }
        printf("\n");
    }

    printf("\n\n");
/*
    2. Binary right angle triangle
    Pattern 3
    -----------
    N3=3
      1
     101
    10101
     101
      1
*/

    int n3,row3,col3;

    printf("Enter N3= ");
    scanf("%d",&n3);

    for(row3=1; row3<=n3; row3++)
    {
        for(col3=1; col3<=n3-row3; col3++)
        {
            printf(" ");
        }

        for(col3=1; col3<=2*row3-1; col3++)
        {
            printf("%d",col3%2);
        }
        printf("\n");
    }

    for(row3=n3-1; row3>=1; row3--)
    {
        for(col3=1; col3<=n3-row3; col3++)
        {
            printf(" ");
        }

        for(col3=1; col3<=2*row3-1; col3++)
        {
            printf("%d",col3%2);
        }
        printf("\n");
    }

    printf("\n\n");
/*
    Pattern 4
    ------------
    N4=3
      1
     000
    11111
     000
      1
*/
    int n4,row4,col4;

    printf("Enter N4= ");
    scanf("%d",&n4);

    for(row4=1; row4<=n4; row4++)
    {

        for(col4=1; col4<=n4-row4; col4++)
        {
            printf(" ");
        }

        for(col4=1; col4<=2*row4-1; col4++)
        {
            printf("%d",row4%2);
        }
        printf("\n");
    }

    for(row4=n4-1; row4>=1; row4--)
    {

        for(col4=1; col4<=n4-row4; col4++)
        {
            printf(" ");
        }

        for(col4=1; col4<=2*row4-1; col4++)
        {
            printf("%d",row4%2);
        }
        printf("\n");
    }


    printf("\n\n");
/*
    3. Alphabetic right angle triangle
    Pattern 5
    -----------
    N5=3
      A
     ABC
    ABCDE
     ABC
      A
*/

    int n5,row5,col5;

    printf("Enter N5= ");
    scanf("%d",&n5);

    for(row5=1; row5<=n5; row5++)
    {

        for(col5=1; col5<=n5-row5; col5++)
        {
            printf(" ");
        }

        for(col5=1; col5<=2*row5-1; col5++)
        {
            printf("%c",col5+64);
        }
        printf("\n");
    }

    for(row5=n5-1; row5>=1; row5--)
    {

        for(col5=1; col5<=n5-row5; col5++)
        {
            printf(" ");
        }

        for(col5=1; col5<=2*row5-1; col5++)
        {
            printf("%c",col5+64);
        }
        printf("\n");
    }


    printf("\n\n");
/*
    Pattern 6
    ------------
    N6=3
      A
     BBB
    CCCCC
     BBB
      C
*/
    int n6,row6,col6;

    printf("Enter N6= ");
    scanf("%d",&n6);

    for(row6=1; row6<=n6; row6++)
    {

        for(col6=1; col6<=n6-row6; col6++)
        {
            printf(" ");
        }

        for(col6=1; col6<=2*row6-1; col6++)
        {
            printf("%c",row6+64);
        }
        printf("\n");
    }

    for(row6=n6-1; row6>=1; row6--)
    {

        for(col6=1; col6<=n6-row6; col6++)
        {
            printf(" ");
        }

        for(col6=1; col6<=2*row6-1; col6++)
        {
            printf("%c",row6+64);
        }
        printf("\n");
    }

    printf("\n\n");
 /*
    Pattern 7
    -----------
    N7=3
      a
     abc
    abcde
     abc
      a
*/

    int n7,row7,col7;

    printf("Enter N7= ");
    scanf("%d",&n7);

    for(row7=1; row7<=n7; row7++)
    {

        for(col7=1; col7<=n7-row7; col7++)
        {
            printf(" ");
        }

        for(col7=1; col7<=2*row7-1; col7++)
        {
            printf("%c",col7+96);
        }
        printf("\n");
    }

    for(row7=n7-1; row7>=1; row7--)
    {

        for(col7=1; col7<=n7-row7; col7++)
        {
            printf(" ");
        }

        for(col7=1; col7<=2*row7-1; col7++)
        {
            printf("%c",col7+96);
        }
        printf("\n");
    }

    printf("\n\n");
/*
    Pattern 8
    ------------
    N8=3
      a
     bbb
    ccccc
     bbb
      c
*/
    int n8,row8,col8;

    printf("Enter N8= ");
    scanf("%d",&n8);

    for(row8=1; row8<=n8; row8++)
    {

        for(col8=1; col8<=n8-row8; col8++)
        {
            printf(" ");
        }

        for(col8=1; col8<=2*row8-1; col8++)
        {
            printf("%c",row8+96);
        }
        printf("\n");
    }

    for(row8=n8-1; row8>=1; row8--)
    {

        for(col8=1; col8<=n8-row8; col8++)
        {
            printf(" ");
        }

        for(col8=1; col8<=2*row8-1; col8++)
        {
            printf("%c",row8+96);
        }
        printf("\n");
    }

    printf("\n\n");
/*
    4. Special character right angle triangle
    Pattern 9
    -----------
    N9=3
      *
     ***
    *****
     ***
      *
*/

    int n9,row9,col9;

    printf("Enter N9= ");
    scanf("%d",&n9);

    for(row9=1; row9<=n9; row9++)
    {

        for(col9=1; col9<=n9-row9; col9++)
        {
            printf(" ");
        }

        for(col9=1; col9<=2*row9-1; col9++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(row9=n9-1; row9>=1; row9--)
    {

        for(col9=1; col9<=n9-row9; col9++)
        {
            printf(" ");
        }

        for(col9=1; col9<=2*row9-1; col9++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");
/*
    Pattern 10
    ------------
    N10=3
      #
     ###
    #####
     ###
      #
*/
    int n10,row10,col10;

    printf("Enter N10= ");
    scanf("%d",&n10);

    for(row10=1; row10<=n10; row10++)
    {

        for(col10=1; col10<=n10-row10; col10++)
        {
            printf(" ");
        }

        for(col10=1; col10<=2*row10-1; col10++)
        {
            printf("#");
        }
        printf("\n");
    }

    for(row10=n10-1; row10>=1; row10--)
    {

        for(col10=1; col10<=n10-row10; col10++)
        {
            printf(" ");
        }

        for(col10=1; col10<=2*row10-1; col10++)
        {
            printf("#");
        }
        printf("\n");
    }

    printf("\n\n");



    getch();
}



