
//centigrade to fahrenheit calculate

#include<stdio.h>
int main()
{

    float c,f;

    printf("Enter Centrigrade: ");
    scanf("%f",&c);

    f = (c*1.8)+32;
    printf("%.2f\n",f);

    getch();

}
