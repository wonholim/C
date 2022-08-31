#include <stdio.h>
void print5Stars(void);
int main(void){
    for(int i = 0; i < 3; i++){
    print5Stars();
    }
}
void print5Stars(void){
    int i, num = 5;
    for(int i = 0; i < num; i++){
        printf("*");
    }
    printf("\n");
}