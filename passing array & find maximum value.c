

//

// Passing array to function and find maximum value

#include<stdio.h>

int maximum(int x[])
{
    int i,max=0;
    for(i=0; i<5; i++)
    {
        if(max<x[i])
            max= x[i];
    }
    return max;
}

int main()
{
    int maximumValue;
    int num[]={25,35,40,45,57};
    maximumValue = maximum(num);

    printf("Maximum= %d",maximumValue);


    getch();
}

