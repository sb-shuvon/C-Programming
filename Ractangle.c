
//Ractangle area calculate

#include<stdio.h>
int main()
{
    float width,length,area;

    printf("Enter Width: ");
    scanf("%f",&width);

    printf("Enter Length: ");
    scanf("%f",&length);

    area= width*length;
    printf("Ractangle area: %.2f",area);


    getch();
}
