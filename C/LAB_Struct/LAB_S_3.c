#include <stdio.h>

typedef struct person{
    char name[20];
    int age;
} Person;

void printPerson1(Person p);
void printPerson2(Person *p);
void printPeople(Person *p, int size);
void printPerson1(Person p){
    printf("%s %d\n", p.name, p.age);
}
void printPerson2(Person *p){
    printf("%s %d\n", p->name, p->age);
}
void printPeople(Person *p, int size){
    for(int i = 0; i < size; i++){
        printf("%s %d\n", p->name, p->age);
        p++;
    }
}
int main(){
    Person aPerson = {"Suehee", 30};
    Person people[3] = {{"에릭", 38},{"윤계상", 37},{"서현진", 32}};
    printPerson1(aPerson);
    printPerson2(&aPerson);
    printPeople(people, 3);
}