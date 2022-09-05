#include <stdio.h>
struct student{
    char name[20];
    int midterm;
    int final;
    int average;
};
int main(){
    struct student list[3];
    for(int i = 0; i < 3; i++){
        printf("Enter student name: ");
        scanf("%s", list[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &list[i].midterm, &list[i].final);
        list[i].average = (list[i].midterm + list[i].final) / 2;
    }
    printf("이름\t중간\t기말\n");
        for(int i = 0; i < 3; i++){
        printf("%s\t%d\t%d\n", list[i].name, list[i].midterm, list[i].final);
        }
    printf("이름\t학점\n");
    for(int i = 0; i < 3; i++){
        if(list[i].average >= 80){
        printf("%s\t%c\n", list[i].name, 'A');
        }else if(list[i].average >= 50){
        printf("%s\t%c\n", list[i].name, 'B');
        }else{
        printf("%s\t%c\n", list[i].name, 'F');
        }
    }
    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += list[i].midterm;
    }
    printf("중간 평균 : %d\n", sum / 3);
    sum = 0;
    for(int i = 0; i < 3; i++){
        sum += list[i].final;
    }
    printf("기말 평균 : %d\n", sum / 3);
}