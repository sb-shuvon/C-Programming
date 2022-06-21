
//Write a program that can take some numbers and display Minimum

#include<stdio.h>
int main()
{
    int num[100],n,i,min;

    printf("How many numbers: ");
    scanf("%d",&n);

    printf("Enter your numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    min= num[0];

    for(i=0; i<n; i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("Minimum= %d\n",min);

    getch();
}

