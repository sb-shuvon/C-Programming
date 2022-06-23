
// Structure

#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1,person2;

    person1.age = 19;
    person1.salary = 100000;

    person2.age = 18;
    person2.salary = 10000;

    printf("Person1: \n");
    printf("Age: %d\n",person1.age);
    printf("Salary: %.2f\n\n",person1.salary);

    printf("Person2: \n");
    printf("Age: %d\n",person2.age);
    printf("Salary: %.2f\n",person2.salary);


    getch();
}
