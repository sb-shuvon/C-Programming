
// Structure Comparision

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

    //structure variable assignement
    person3 = person2;

    if(person2.age == person2.age && person3.salary == person3.salary)
        printf("person2 equal person3");

    else
        printf("Person2 not equal to person3");



    getch();
}
