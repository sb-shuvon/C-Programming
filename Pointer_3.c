
//Adding two number using pointer

#include<stdio.h>
int main()
{
    int x=10,y=20,result;

    int *ptr1,*ptr2;

    ptr1 = &x;
    ptr2 = &y;

    result = *ptr1 + *ptr2;
    printf("Sum= %d\n",result);

    result = *ptr1 - *ptr2;
    printf("Sub= %d\n",result);

    result = *ptr1 * *ptr2;
    printf("Mul= %d\n",result);

    result = *ptr1 / *ptr2;
    printf("Div= %d\n",result);

    result = *ptr1 % *ptr2;
    printf("Modulas= %d\n",result);





    getch();
}
