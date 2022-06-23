
// Size of union

#include<stdio.h>

union test1
{
    int x,y
};

union test2
{
    char ch;
    int x;
};

union test3
{
    char name[20];
    double d;
};


struct test4
{
    int x;
    int y;
    char ch;
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;


    printf("Size of test(t10 = %d\n",sizeof(t1));
    printf("Size of test(t2) = %d\n",sizeof(t2));
    printf("Size of test (t3) = %d\n",sizeof(t3));
    printf("Size of test (t4) = %d\n",sizeof(t4));


    getch();
}
