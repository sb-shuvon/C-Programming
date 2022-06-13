

//fahrenheit to centigrade  calculate

#include<stdio.h>
int main()
{
    float f,c;

    printf("Enter Fahrenheit: ");
    scanf("%f",&f);

    c = (f-32)/1.8;
    printf("Centigrade are= %f",c);



    getch();
}
