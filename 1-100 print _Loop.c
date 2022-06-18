
//1-100 print using Loop
//1-n print using Loop

#include<stdio.h>
int main()
{
    //for loop
    int i,n;

    printf("Enter n: ");
    scanf("%d",&n);
    for(i=2; i<=n; i=i+2)
        printf("%d\n",i);

    getch();
}
