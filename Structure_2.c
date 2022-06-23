
// Structure- Initialize structure varialbe

#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    //directly initialize
    struct Person person1 = {19,24555};
    struct Person person2,person3;

    //element wise initialize
    person2.age = 18;
    person2.salary = 100000;

    //
    person3 = person2;


    printf("\nPerson1: \n");
    printf("Age: %d\n",person1.age);
    printf("Salary: %.2f\n\n",person1.salary);

    printf("\n\n");

    printf("Person2: \n");
    printf("Age: %d\n",person2.age);
    printf("Salary: %.2f\n\n",person2.salary);

    printf("\n\n");

    printf("Person3: \n");
    printf("Age: %d\n",person3.age);
    printf("Salary: %.2f\n\n",person3.salary);


    getch();
}
