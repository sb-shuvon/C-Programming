
//Write a program that can take some numbers and display maximum

#include<stdio.h>
int main()
{
    int num[100],n,i,max;

    printf("How many numbers: ");
    scanf("%d",&n);

    printf("Enter your numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    max= num[0];

    for(i=0; i<n; i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Maximum= %d\n",max);

    getch();
}
