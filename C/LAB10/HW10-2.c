#include <stdio.h>
void print5Stars(int num);
int main(void){
    for(int i = 3; i <= 5; i++){
    print5Stars(i);
    }
}
void print5Stars(int num){
    int i;
    for(int i = 0; i < num; i++){
        printf("*");
    }
    printf("\n");
}