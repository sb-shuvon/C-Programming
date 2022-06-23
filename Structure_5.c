
// passing structure variable to function

#include<stdio.h>

struct Person
{
    char name[20];
    int age;
    float salary;
};

void display(struct Person p)
{
    printf("Name: %s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("Salary: %f\n",p.salary);
}


int main()
{
    struct Person person1,person2;

    strcpy(person1.name, "Nilima Tasni bappi");
    person1.age = 18;
    person1.salary = 10000;
    display(person1);

    printf("\n\n");

    strcpy(person2.name, "sb shuvon");
    person2.age = 19;
    person2.salary = 200000;
    display(person2);



    getch();
}
