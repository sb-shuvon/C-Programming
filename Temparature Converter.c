
//Manu base Temparature Convertion Menu

#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;

    printf("Temparature Convertion Menu:\n\n");
    printf("1.Fahrenheit to Celcious\n");
    printf("2.Celcious to Fahrenheit\n\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {

    case 1:
    {
        printf("Enter the Fahrenheit Temparature: ");
        scanf("%f",&temp);
        convertedTemp = (temp-32/2.8);
        printf("The Temparature in Celcius is: %,2f\n",convertedTemp);
        break;

    }

    case 2:
    {
        printf("Enter the Celcius Temparature: ");
        scanf("%f",&temp);
        convertedTemp = (temp*1.8)+32;
        printf("The Temparature in Fahrenheit is: %.2f\n",convertedTemp);
        break;

    }
    default:
        printf("Not a correct option");

    }



    getch();
}
