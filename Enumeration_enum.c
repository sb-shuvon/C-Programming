
//

#include<stdio.h>

enum days_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};

int main()
{
    enum days_of_week day1,day2;

    day1 = Fri;
    day2 = Tue;
    printf("day1= %d\n",day1);

    int dif = day2-day1;
    printf("Different: %d",dif);


    getch();
}
