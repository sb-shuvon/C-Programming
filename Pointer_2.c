
//pointer pointing to different variable

#include<stdio.h>
int main()
{
    int x=10,y=20,z=30;

    int *ptr;

    ptr =&x;
    printf("x= %d\n",ptr);
    printf("x= %d\n",*ptr);
    printf("x= %d\n\n\n",&ptr);

    ptr =&y;
    printf("y= %d\n",ptr);
    printf("y= %d\n",*ptr);
    printf("y= %d\n\n\n",&ptr);

    ptr =&z;
    printf("z= %d\n",ptr);
    printf("z= %d\n",*ptr);
    printf("z= %d\n",&ptr);


    getch();
}
