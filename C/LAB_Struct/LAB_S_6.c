#include <stdio.h>
typedef struct student{
    char name[20];
    int midterm;
    int final;
    int average;
} Student;
void printfStudent(Student s);
void printfStudent(Student s){
    printf("%s\t%d\t%d\t%d\n", s.name, s.midterm, s.final, s.average);
}
int main(){
    Student s[40];
    int num;
    printf("Enter a number of Student : ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &s[i].midterm, &s[i].final);
        s[i].average = (s[i].midterm + s[i].final) / 2;
    }
    printf("\n이름\t중간\t기말\t평균\n");
    for(int i = 0; i < num; i++){
        printfStudent(s[i]);
    }
}