#include <stdio.h>
void printManyStars(int starNum);
int main(void){
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    printManyStars(a);
}
void printManyStars(int starNum){
    for(int i = 0; i < starNum; i++){
        printf("*");
    }
    printf("%d", starNum);
}