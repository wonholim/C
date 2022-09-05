#include <stdio.h>
struct student{
    char name[20];
    int midterm;
    int final;
};
int main(){
    struct student list[3];
    for(int i = 0; i < 3; i++){
        printf("Enter student name: ");
        scanf("%s", list[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &list[i].midterm, &list[i].final);
    }
    printf("이름\t중간\t기말\n");
        for(int i = 0; i < 3; i++){
        printf("%s\t%d\t%d\n", list[i].name, list[i].midterm, list[i].final);
    }

}